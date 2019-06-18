a=input()
if a==a[::-1]:
    print("yes")
else:
    vin=n.strip("0")
        if vin==vin[::-1]:
        print("yes")
    else:
        vin=a.lstrip("0")
        if vin==vin[::-1]:
            print("yes")
        else:
            print("no")
