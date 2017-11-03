import sys
a=[]
for line in sys.stdin:
    line=line.strip()
    a.append(line.split())
for i in range(len(a)):
    lists=a[i]
    ans=set()
    b=[int(i) for i in lists]
    for j in range(len(b)):
        temp = b[j]
        b[j]=0
        # print("B",b,"temp",temp)
        if sum(b)==temp:
            ans.add(temp)
        b[j]=temp
    print(*ans)
