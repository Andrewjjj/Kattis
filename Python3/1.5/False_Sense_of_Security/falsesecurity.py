d1={'A':'.-','H':'....','O':'---','V':'...-',
    'B':'-...','I':'..','P':'.--.','W':'.--',
    'C':'-.-.','J':'.---','Q':'--.-','X':'-..-',
    'D':'-..','K':'-.-','R':'.-.','Y':'-.--',
    'E':'.','L':'.-..','S':'...','Z':'--..',
    'F':'..-.','M':'--','T':'-',
    'G':'--.','N':'-.','U':'..-',
    '_':'..--',
    '.':'---.',
    ',':'.-.-',
    '?':'----'}
d2=dict()

for i in d1:
    d2[d1[i]] = i
# print (d1)
# print (d2)

import sys
tot=[]
for line in sys.stdin:
    tot.append(line.strip())

# print (tot)

for a in tot:
    # a=input()

    # if a == "" or 0:
    #     break
    listlen=[]
    morselist = []
    # print (a)
    for e in range(len(a)):
        morselist.append(d1[a[e]])
        # print(e)
    morse = "".join(morselist)

    for e in a:
        listlen.append(len(d1[e]))

    listlen.reverse()

    start = 0
    newmorse = []
    for i in range(len(listlen)):
        # for j in range(len(listlen[i])):
        newmorse.append(d2[morse[start:listlen[i]+start]])
        start = listlen[i]+start

    newl = "".join(newmorse)
    print(newl)

    # morse = morse[::-1]

    # for _ in len(listlen):
    #     for
