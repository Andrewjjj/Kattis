a=int(input())
b=[]
c=0
for _ in range(a):
    b.append(int(input()))
b.sort()
b.reverse()
for i in range(len(b)):
    if i%3==2:
        continue
    else:
        c+=b[i]
print(c)
