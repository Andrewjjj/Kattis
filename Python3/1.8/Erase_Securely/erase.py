a=int(input())
a=a%2
b=input()
c=input()
q=True
for i in range(len(b)):
    if a == 1:
        if b[i] == c[i]:
            q=False
    else:
        if b[i] != c[i]:
            q=False
if q == False:
    print("Deletion failed")
else:
    print("Deletion succeeded")
