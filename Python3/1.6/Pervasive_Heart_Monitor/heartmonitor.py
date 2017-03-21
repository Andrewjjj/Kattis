import sys
data = []
for a in sys.stdin:
    data.append(a.strip().split())

for a in data:
    names=[]
    rates=[]
    for element in a:
        try:
            rates.append(float('%.2f' % float(element)))
        except ValueError:
            names.append(element)
    # print("22:",a)
    # c=float('%.5f' % c)
    average=sum(rates)/len(rates)
    average=float('%.6f' % average)
    # print("Sum:", sum(rates)/len(rates))
    name=" ".join(names)
    print(average, name)
    # print("Names",names)
    # print("Rates:",rates)

# print(data)
