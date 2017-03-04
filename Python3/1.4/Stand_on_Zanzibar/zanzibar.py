import sys
a=int(input())

for _ in range(a):
    d=[]
    while True:
        d = [int(a) for a in input().split()]
        if d[-1] == 0:
            break
        # if a == 0:
        #     break
        # d.append(a)
        # print(d)
    newhab = 0
    for i in range(len(d)-1):
        if d[i+1]>d[i]*2:
            newhab += d[i+1]-d[i]*2
    print (newhab)
