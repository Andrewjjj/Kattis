a=input()
# b=[0]*12
p=[0]*13
k=[0]*13
h=[0]*13
t=[0]*13

alist=[0,0,0,0]

# list(12),list(b),list(b),list(b)
# for _ in range(12):

for j in range(int(len(a)/3)):
    i=j*3
    q=a[i]
    if a[i+1] == '0':
        y=int(a[i+2])-1
    else:
        y=int(a[i+1:i+3])-1
    if q=="P":
        p[y] += 1
        # print("into P")
    elif q=="K":
        k[y] += 1
        # print("into K")
    elif q=="H":
        h[y] += 1
        # print("into H")
    elif q=="T":
        t[y] += 1
        # print("into T")

# print(p,k,h,t)
greska = False
for i in range(13):
    if p[i]>=2 or k[i]>=2 or h[i]>=2 or t[i]>=2:
        greska = True
    if p[i] == 0:
        alist[0]+=1
    if k[i] == 0:
        alist[1]+=1
    if h[i] == 0:
        alist[2]+=1
    if t[i] == 0:
        alist[3]+=1
if greska == True:
    print("GRESKA")
else:
    print(*alist)
