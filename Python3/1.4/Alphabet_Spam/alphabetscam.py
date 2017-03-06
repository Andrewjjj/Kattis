import string
from decimal import *
a=input()
b=[0]*4
for q in a:
    if q == "_":
        b[0]+=1
    elif q.islower():
        b[1]+=1
    elif q.isupper():
        b[2]+=1
    else:
        b[3]+=1
for i in range(4):

    q='%.6f' % b[i]
    w='%.6f' % len(a)
    e=float(q)/float(w)
    print (e)
# '%.2f' % 1.234
