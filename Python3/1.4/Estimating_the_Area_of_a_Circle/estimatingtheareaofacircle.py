from decimal import *
a,b,c = [float(e) for e in input().split()]
print (a,b,c)
pi=3.14159265359
getcontext().prec = 5
q=a**2*pi
# q='{0:11.8f}'.format(q)
w=(a*2)**2*(c/b)

# w='{0:11.8f}'.format(w)

print(q, w)
# getcontext().prec = 8
# Decimal(1) / Decimal(7)
