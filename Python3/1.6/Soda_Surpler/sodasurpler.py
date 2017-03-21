a,b,c = [int(q) for q in input().split()]
# drank = 0

def exchangefornew(emptybot, divis):
    return int(emptybot/divis)

emptybot = a+b
# leftover = (a+b)%c
drink = 0
newbot = 1
while newbot > 0:
    # print(int((toexchange+cantexchange)/c))
    newbot=int((emptybot)/c)
    leftover = (emptybot)%c
    # print("I drank",toexchange,"to",drink)
    drink += newbot
    emptybot = newbot
    # print("now its",drink)
    emptybot = emptybot+leftover
    # print("leftover",cantexchange)
    # print()
    # if drink>10:
    #     break

print(drink)
"""
This problem was hard
1) count empty bottles
2) exchange for new bottles
3) count leftover bottles
3) drink the new bottles
4) combine new bottles with empty bottles
5) goto 2
"""

# bottle = a+b
# extrabot = 0
# # print(a,b,c)
# # print("Bottle:",bottle)
# renew = int(bottle/c)
# extrabot = bottle%c
# drank += renew
# # print(leftover)
# # print (drank)
# print("renew:",renew, "Extra:",extrabot, "Drank:",drank)
# while renew > 0:
#     # print("B4",renew,extrabot)
#     # print("1",renew+extrabot)
#     # print("2",(renew+extrabot)/c)
#     # print("3",int((renew+extrabot)/c))
#     renew = int((renew+extrabot)/c)
#     drank += renew
#     # print("After",leftover,extrabot)
#     extrabot = renew+extrabot%c)
#     # print("Leftover:",leftover)
#
#     print(drank)
#     print()
#     # print("Left:",leftover, "Extra:",extrabot, "Drank:",drank)
#
# print(drank)
