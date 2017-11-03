a=[a for a in str(input())]
b=set()
for i in a:
    b.add(i)
c=(len(b)-2) if (len(b)-2)>=0 else 0
print(c)
