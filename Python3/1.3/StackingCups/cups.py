import operator

a=int(input())
d=[]
for _ in range(a):
    b=input().split()
    try:
        e=int(b[0])
        d.append([e,b[1]])
        # d[b[1]]=e
    except ValueError:
        # print("NOT INT")
        e=int(b[1])*2
        d.append([e,b[0]])
        # d[e*2] = b[0]
        # d[b[0]]=e*2

d.sort()
# print(d)
for w,q in d:
    print(q)
