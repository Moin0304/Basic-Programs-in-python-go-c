# n=int(input("enter the number:"))
# for i in range(n):
#     space=" "*(n-(i+1))
#     star="*"*(i+1)
#     print(space+star)
# for i in range(n):
#     s=" "*i 
#     st="*"*(n-i)
#     print(s+st)

n = int(input("enter number: "))
t = n*2//2
c = t
for i in range(n*2+1):
    if i <= (t):
        for j in range(t+1):
            if j <= t+1 and j >= t+1-i:
                print("*",end="")
            else:
                print(" ",end="")
        print()
    
    else:
        for j in range(n*2+1):
            if j > t and j <= t+c:
                print("*",end="")
            else:
                print(" ",end="")
        c -= 1
        print()