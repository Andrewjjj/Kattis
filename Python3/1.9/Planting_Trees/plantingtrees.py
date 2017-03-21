a=int(input())
b=[int(a) for a in input().split()]
b.sort()
b.reverse()
for i in range(len(b)):
    b[i]+=i+1
print(max(b)+1)
