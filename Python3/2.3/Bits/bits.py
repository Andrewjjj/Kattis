a=int(input())
b=[]
for _ in range(a):
    b.append(input())
for j in range(len(b)):
    maxx=0
    for i in range(0,len(b[j])):
        temp=bin(int(b[j][0:i+1]))
        if maxx<temp.count('1'):
            maxx=temp.count('1')
    print(maxx)
