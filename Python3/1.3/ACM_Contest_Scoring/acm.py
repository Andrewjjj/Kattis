import sys

d=[]
e=dict()
f=dict()
score = 0
numbersolved = 0

for line in sys.stdin:

    if line[0:2] == '-1':
        break;
    d.append(line.split())

for t in d:
    value=int(t[0])
    alph=t[1]
    ans=t[2]

    if ans == 'wrong':
        temp=0
        if alph in e:
            temp = e[alph]
        e[alph] = 20+temp
        # print("Added now:", e[alph])
    else:
        if alph in e:
            score += e[alph]+value
        else:
            score += value
        numbersolved += 1
    # print("Current Alph: ", alph)
    # print("Current Value: ", value)
    # print("Current Score: ",score)
    # print("")
# print (d)
# print (e)
print (numbersolved, score)
# print ("SCORE IS: ",score)
# print ("Solved: ",numbersolved)
