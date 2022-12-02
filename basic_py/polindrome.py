# n=int(input("enter a number: "))
# rev=0
# rem=0
# temp=n
# while temp:
#     rem=temp%10
#     rev=rev*10+rem
#     temp=temp//10
# if n==rev:
#     print("its a polindrome number")
# else:
#     print("its not a polindrome")

string=input(("Enter a string:"))
if(string==string[::-1]):
      print("The string is a palindrome")
else:
      print("Not a palindrome")