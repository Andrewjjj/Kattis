# import math
a=int(input())
for _ in range(a):
    b=int(input())
    q=[]
    for i in range(b):
        q.append(int(input()))
    w=0
    index=0
    for i in range(len(q)):
        if q[i]>w:
            w=q[i]
            index=i+1
    q.sort()
    q.reverse()
    if len(q)>=2:
        if q[0]==q[1]:
            print("no winner")
            continue
    if(max(q)>(sum(q)/2)):
        print("majority winner",index)
    else:
        print("minority winner",index)
