# n=[28,31,31,29,30,30]
# a=min(n)
# b=max(n)
# c=[[],[]]
# for i in range(a,b+1):
#     if i in n:
#         if n.count(i)>1:
#             c[0].append(i)
#     else:
#         c[1].append(i)
# if not(c[1]):
#     c[1].append(b+1)
# print(c)

n= [28,31,31,29,30,30]
n1=set(n)
c=[[],[]]
x=min(n)
while True:
    if n.count(x)>1:
        c[0].append(x)
    if x not in n1:
        n1.add(x)
        c[1].append(x)
    if len(n1)==len(n) and c[0] and c[1]:
        break
    x+=1

print(c)
