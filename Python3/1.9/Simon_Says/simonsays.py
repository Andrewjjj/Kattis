a=int(input())
for _ in range(a):
    b=[a for a in input().split()]
    if b[0:2]==['simon','says']:
        g=" ".join(b[2:])
        print(g)
    else:
        print()
