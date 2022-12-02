a=int(input("enter a starting number: "))
b=int(input("enter a end number: "))
for i in range(a,b+1):
    if i>1:
        for j in range(2,i):
            if i%j==0:
                break
        else:
            print(i,end=" ")

# n=int(input("enter a number: "))
# c=0
# for i in range(1,n+1):
#     if n%i==0:
#         c+=1
# if c>2:
#     print("its not a prime")
# else:
#     print("its prime")