a=[int(a) for a in input().split()]
b=[a for a in input()]
c=dict()
a.sort()
# print(b)
# for i in range(3):
c['A']=a[0]
c['B']=a[1]
c['C']=a[2]
q=[]
for i in range(3):
    q.append(c[b[i]])

w=" ".join(str(t) for t in q)
print(w)
