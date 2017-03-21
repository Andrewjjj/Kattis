import sys
a=[]
for line in sys.stdin:
    a.append(line.strip())

for b in a:
    if 'problem' in b.lower():
        print("yes")
    else:
        print("no")
