
from decimal import Decimal, getcontext
getcontext().prec = 40
e = Decimal(0)
f = Decimal(1)
n = Decimal(1)
while True:
    olde = e
    e += Decimal(1) / f
    if e == olde:
        break
    f *= n
    n += Decimal(1)
print(float(e))
