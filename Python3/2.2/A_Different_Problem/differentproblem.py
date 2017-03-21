import sys

a=[]
for line in sys.stdin:
    a.append(line.strip())

# print(a)
for q in a:
    q=q.split()
    print(abs(int(q[0])-int(q[1])))
