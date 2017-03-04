(a,b)=input().split()
a=int(a)
b=int(b)
pi=3.14159265359
c=(b-a)*(b-a)*pi
d=(a*a*pi)
e=c/d*100
q='{:f}'.format(e)
print (q)
