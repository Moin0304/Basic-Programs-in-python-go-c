num1=[2]
num2=[3]
num3=num1+num2
for i in range(len(num3)-1,0,-1):
    for j in range(i):
        if num3[i]<num3[j]:
            temp=num3[i]
            num3[i]=num3[j]
            num3[j]=temp
a=len(num3)//2

if a%2!=0:
    a=num3[a]+num3[a-1]
    b=a/2
    print(b)
else:
    print(num3[a])