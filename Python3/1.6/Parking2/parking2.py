a=int(input())
for _ in range(a):
    input()
    a=[]
    a=[int(a) for a in input().split()]
    b=max([i-min(a) for i in a])
    print(b*2)
