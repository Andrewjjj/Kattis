a=input()
b=input()
c=int(input())
d=[]
# print(len(a))
for i in range(int(a),int(b)+1):
    e=[int(t) for t in str(i)]
    if sum(e) == c:
        d.append(i)

print (d[0])
print (d[-1])
