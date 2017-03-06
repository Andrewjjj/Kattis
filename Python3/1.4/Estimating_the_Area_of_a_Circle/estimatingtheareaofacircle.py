a,b,c = [float(e) for e in input().split()]
print (a,b,c)
a=float('%.5f' % a)
b=float('%.5f' % b)
c=float('%.5f' % c)
pi=3.14159265359
q=a**2*pi
# q='%.5f' % q/
# q='{0:11.8f}'.format(q)
w=(a*2)**2*(c/b)
# w='%.5f' % w

# w='{0:11.8f}'.format(w)

print(q, w)
# getcontext().prec = 8
# Decimal(1) / Decimal(7)
