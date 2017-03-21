a=input().split()
for i in range(len(a)):
    a[i]=int(a[i])
a.sort()
# print(a)
a1=(int(a[1])-int(a[0]))
a2=(int(a[2])-int(a[1]))
if a1>a2:
    print(int(a[0])+a2)
elif a1<a2:
    print(int(a[1])+a1)
else:
    print(int(a[2])+a2)
# int(a[-1])+))
