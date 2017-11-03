import sys
a=int(input())
b=int(input())
c=[]
for q in sys.stdin:
    c.append(int(q))
d=0
for i in range(b):
    d+=a
    d-=c[i]
d+=a


# r=((a[0]*(a[1]))-(a[2]+a[3]+a[4]))+a[0]

print(d)
