try:
    from typing import Self
except ImportError:
    from typing_extensions import Self
from _util import _modulus
from he._ntt import _NTT_Engine
from _util._prime import *
from he.galois_ring.poly_config import PolyConfig

# element of galois field Z_q[X]/f(X), negacyclic ring
# q: prime, f(X) = X^N + 1
class Poly:

    def __init__(self, coeff_modulus : int, poly_modulus : int, data=[], is_ntt_form=False):
        self._data = data
        self._coeff_modulus = coeff_modulus
        self._poly_modulus = poly_modulus
        self._is_ntt_form = is_ntt_form
        self._ntt_engine = None
        self._norm = 0
        if is_ntt_form:
            if len(data) < poly_modulus:
                self._data += [ 0 for _ in range(poly_modulus - len(data))]
        else:
            self._compress()

    def __add__(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match")
        if len(self._data) < len(other._data):
            res = self._data.copy()
            long = other._data
        else:
            res = other._data.copy()
            long = self._data
        for idx in range(len(res)):
            res[idx] = _modulus._centered_modulus(res[idx] + long[idx], self._coeff_modulus)
        res += long[len(res):]
        return Poly(self._coeff_modulus, self._poly_modulus, res, self._is_ntt_form)\
            ._set_ntt_engine(self._ntt_engine)\
            ._compress()
    
    def __neg__(self):
        res = self._data.copy()
        for idx in range(len(res)):
            res[idx] = _modulus._centered_modulus(-1 * res[idx], self._coeff_modulus)
        return Poly(self._coeff_modulus, self._poly_modulus, res, self._is_ntt_form)\
            ._set_ntt_engine(self._ntt_engine)\
            ._compress()
    
    def __sub__(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match")
        res = self._data.copy()
        for idx in range(min(len(res), len(other._data))):
            res[idx] = _modulus._centered_modulus(res[idx] - other._data[idx], self._coeff_modulus)
        if len(res) < len(other._data):
            res += (-other)._data
        return Poly(self._coeff_modulus, self._poly_modulus, res, self._is_ntt_form)\
            ._set_ntt_engine(self._ntt_engine)\
            ._compress()
    
    def __mul__(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match")

        if PolyConfig.use_ntt() and self.is_ntt_form():
            # NTT form: pointwise multiply — O(N)
            res = [ _modulus._centered_modulus(a * b, self._coeff_modulus)
                    for a, b in zip(self._data, other._data) ]
            return Poly(self._coeff_modulus, self._poly_modulus, res, self._is_ntt_form)\
                ._set_ntt_engine(self._ntt_engine)\
                ._compress()

        if PolyConfig.use_ntt() and not self.is_ntt_form() and self._ntt_engine is not None:
            # Coefficient form + NTT mode: pad → NTT → pointwise → INTT — O(N log N)
            a = self.copy()
            b = other.copy()
            # pad to full degree before NTT
            if len(a._data) < a._poly_modulus:
                a._data += [0] * (a._poly_modulus - len(a._data))
            if len(b._data) < b._poly_modulus:
                b._data += [0] * (b._poly_modulus - len(b._data))
            a.transform_to_ntt_form()
            b.transform_to_ntt_form()
            res = [_modulus._centered_modulus(x * y, self._coeff_modulus)
                   for x, y in zip(a._data, b._data)]
            return Poly(self._coeff_modulus, self._poly_modulus, res, True)\
                ._set_ntt_engine(self._ntt_engine)\
                .transform_from_ntt_form()\
                ._compress()

        # Schoolbook negacyclic multiplication — O(N^2)
        # Pad both to full degree N so negacyclic reduction is always applied.
        N = self._poly_modulus
        a = self._data + [0] * (N - len(self._data))
        b = other._data + [0] * (N - len(other._data))
        res = [0] * (2 * N)
        for i in range(N):
            for j in range(N):
                res[i + j] = _modulus._centered_modulus(
                    res[i + j] + a[i] * b[j], self._coeff_modulus)
        # Negacyclic reduction: X^N ≡ -1, so coeff[k] -= coeff[k+N]
        for deg in range(2 * N - 1, N - 1, -1):
            res[deg - N] = _modulus._centered_modulus(
                res[deg - N] - res[deg], self._coeff_modulus)
        return Poly(self._coeff_modulus, self._poly_modulus, res[:N], self._is_ntt_form)\
            ._set_ntt_engine(self._ntt_engine)\
            ._compress()
    
    def _compress(self):
        if self.is_ntt_form():
            return self
        while len(self._data) > 0 and self._data[-1] == 0:
            self._data.pop()
        return self

    def _eval_centered_mod(self):
        ntt_flag = False
        if self.is_ntt_form():
            ntt_flag = True
            self.transform_from_ntt_form()
        for i in range(len(self._data)):
            self._data[i] = _modulus._centered_modulus(self._data[i], self._poly_modulus)
        if ntt_flag:
            self.transform_to_ntt_form()
    
    def _set_ntt_engine(self, ntt_engine : _NTT_Engine):
        self._ntt_engine = ntt_engine
        return self
    
    def is_ntt_form(self) -> bool:
        return self._is_ntt_form
    
    def norm(self):
        return self._norm
    
    def transform_to_ntt_form(self):
        if self._ntt_engine == None:
            raise Exception(f"set ntt engine before ntt")
        if self._is_ntt_form == True:
            raise Exception(f"polynomial is already ntt form")
        if len(self._data) < self._poly_modulus:
            self._data += [ 0 for _ in range(self._poly_modulus - len(self._data))]
        self._data = self._ntt_engine._transform_to_ntt_form(self._data)
        self._is_ntt_form = True
        self._compress()
        return self
    
    def transform_from_ntt_form(self):
        if self._ntt_engine == None:
            raise Exception(f"set ntt engine before intt")
        if self._is_ntt_form == False:
            raise Exception(f"polynomial is already basic form")
        if len(self._data) < self._poly_modulus:
            self._data += [ 0 for _ in range(self._poly_modulus - len(self._data))]
            raise Exception("polynomial is broken")
        self._data = self._ntt_engine._transform_from_ntt_form(self._data)
        self._is_ntt_form = False
        self._compress()
        return self
    
    def copy(self) -> Self:
        temp_data = self._data.copy()
        ret = Poly(self._coeff_modulus, self._poly_modulus, temp_data, self._is_ntt_form)\
            ._set_ntt_engine(self._ntt_engine)\
            ._compress()
        ret._norm = self._norm
        return ret
    
    def add_inplace(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match")
        if len(self._data) < len(other._data):
            for i in range(len(self._data)):
                self._data[i] = _modulus._centered_modulus(self._data[i] + other._data[i], self._coeff_modulus)
            self._data += other._data[len(self._data):]
        else:
            for i in range(len(other._data)):
                self._data[i] = _modulus._centered_modulus(self._data[i] + other._data[i], self._coeff_modulus)
        return self
    
    def sub_inplace(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match")
        if len(self._data) < len(other._data):
            for i in range(len(self._data)):
                self._data[i] = _modulus._centered_modulus(self._data[i] - other._data[i], self._coeff_modulus)
            for i in range(len(self._data), len(other._data)):
                self._data.append(_modulus._centered_modulus(-1 * other._data[i], self._coeff_modulus))
        else:
            for i in range(len(other._data)):
                self._data[i] = _modulus._centered_modulus(self._data[i] - other._data[i], self._coeff_modulus)
        return self
    
    def neg_inplace(self):
        for idx, d in enumerate(self._data):
            self._data[idx] = _modulus._centered_modulus(-1 * (d + self._coeff_modulus), self._coeff_modulus)
        return self
    
    def mul_inplace(self, other : Self):
        if self._coeff_modulus != other._coeff_modulus:
            raise Exception(f"except Z_{self._coeff_modulus} but Z_{other._coeff_modulus}")
        if self._poly_modulus != other._poly_modulus:
            raise Exception(f"except Z_{self._poly_modulus} but Z_{other._poly_modulus}")
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match {self.is_ntt_form()} {other.is_ntt_form()}")

        if PolyConfig.use_ntt() and self.is_ntt_form():
            for i in range(self._poly_modulus):
                self._data[i] = _modulus._centered_modulus(
                    self._data[i] * other._data[i], self._coeff_modulus)
            return self

        # For all remaining cases (NTT coeff-form or schoolbook), delegate to __mul__
        result = self.__mul__(other)
        self._data = result._data
        self._is_ntt_form = result._is_ntt_form
        return self
    
    def mul_scalar_inplace(self, scalar : int):
        for i in range(len(self._data)):
            self._data[i] = _modulus._centered_modulus(self._data[i] * scalar, self._coeff_modulus)
        return self
    
    def mul_scalar(self, scalar : int):
        ret = self.copy()
        ret.mul_scalar_inplace(scalar)
        return ret
    
    def add_scalar_inplace(self, scalar : int):
        if self.is_ntt_form() == True:
            for i in range(len(self._data)):
                self._data[i] = _modulus._centered_modulus(self._data[i] + scalar, self._coeff_modulus)
        else:
            self._data[0] = _modulus._centered_modulus(self._data[0] + scalar, self._coeff_modulus)
        return self
    
    def add_scalar(self, scalar : int):
        ret = self.copy()
        return ret.add_scalar_inplace(scalar)
    
    def equal(self, other : Self) -> bool:
        if self.is_ntt_form() != other.is_ntt_form():
            raise Exception(f"polynomial form is not match {self.is_ntt_form()} {other.is_ntt_form()}")
        if self._coeff_modulus != other._coeff_modulus or self._poly_modulus != other._poly_modulus:
            return False
        a = self._compress()._data
        b = other._compress()._data
        if len(a) != len(b):
            return False
        for i in range(len(a)):
            if a[i] != b[i]:
                return False
        return True
    
    def centered_mod(self):
        for i in range(len(self._data)):
            self._data[i] = _modulus._centered_modulus(self._data[i], self._coeff_modulus)
        return self
        
    def toString(self, length=-1, print_zero=False) -> str:
        ret = ""
        if self.is_ntt_form():
            ret += "["
            for idx, e in enumerate(self._data):
                if idx == length:
                    break
                ret += f"{e}, "
            return ret[:-2] + "]"
        else:
            for deg, coef in enumerate(self._data):
                if deg == length:
                    break
                if coef == 0 and not print_zero:
                    continue
                ret += f"{coef}x^{deg} + "
            if ret == "":
                return "empty"
            else:
                return ret[:-3]

if __name__ == "__main__":
    n = 8
    q = 12289
    p1 = Poly(q, n, [1, 2, 3, 0, 4, 5, 6, 0, 0])
    p2 = Poly(q, n, [2, 4, 6, 1])
    print("p1: " + p1.toString(True))
    print("p2: " + p2.toString())
    print("compress: " + p1._compress().toString(True))
    print("p1 - p2: " + (p1 - p2).toString())
    print("p1 * p2: " + (p1 * p2).toString())
    print("p1 NTT: " + p1.transform_to_ntt_form().toString())
    print("p1 INTT: " + p1.transform_from_ntt_form().toString())
    print("p1 + p2: " + (p1 + p2).toString())
    p3 = (p1.transform_to_ntt_form() + p2.transform_to_ntt_form()).transform_from_ntt_form()
    print("p1 + p2: " + p3.toString())