a=int(input())
b=int(input())
atime=0
explode=0
bomboff = False
for _ in range(b):
    alist=[]
    alist=input().split()
    atime += int(alist[0])
    if atime > 210 and bomboff == False:
        # explode=a%8
        bomboff = True

    if alist[1] == 'T':
        a+=1
    if bomboff == False:
        explode=a%8
#         print(a)
# if bomboff == True:
#     explode = a%8
if explode == 0:
    explode = 8
print(explode)
