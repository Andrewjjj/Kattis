a=int(input())
b=[]
for _ in range(a):
    b.append(input())
c=[]
for items in b:
    c.append(items)
c.sort()
if c == b:
    print("INCREASING")
    quit()
c.reverse()
if c == b:
    print("DECREASING")
    quit()
print("NEITHER")
