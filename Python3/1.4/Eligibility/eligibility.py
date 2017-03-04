for _ in range(int(input())):
    name,began,birth,course=[a for a in input().split()]
    if int(began[0:4])>=2010:
        print(name, "eligible")
        continue
    else:
        if int(birth[0:4])>=1991:
            print(name, "eligible")
            continue
        else:
            if int(course)>=41:
                print(name, "ineligible")
                continue
            else:
                print(name, "coach petitions")
