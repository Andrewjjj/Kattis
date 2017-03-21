#incomplete

a=input()
b=input()
c=[]
d=[]
max(len(a),len(b))

for i in range(min(len(a),len(b))):
    if int(a[i])>int(b[i]):
        c.append(a[i])
    elif int(a[i])<int(b[i]):
        d.append(b[i])
    else:
        c.append(a[i])
        d.append(b[i])
print(c)
print(d)
print(int("".join(c)))
print(int("".join(d)))
