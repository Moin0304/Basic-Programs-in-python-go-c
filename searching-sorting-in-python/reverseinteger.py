i=-10
b=abs(i)
a=str(b)
c=a[::-1]

x=str(i)

if x.startswith("-"):
    print("-"+c)
elif x.endswith("0"):
    d=b//10
    e=str(d)
    f=e[::-1]
    print(f)
elif x.startswith("-") and x.endswith("0"):
    d=b//10
    # print(d)
    

else:
    print(c)





