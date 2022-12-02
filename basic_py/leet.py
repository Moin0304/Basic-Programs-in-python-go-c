# Input: s = "()[]{}"
# Output: true

# s="()[]{}"
# a=s.split()
# print(a)

# for i in a:
#     print(i)


# m=int(input("how many elements in l: "))
# n=int(input("how many elements in l1: "))
# l=[]
# l1=[]
# for i in range(m):
#     ele=int(input("enter the element of l:"))
#     l.append(ele)
# for j in range(n):
#     ele=int(input("enter the element of l1:"))
#     l1.append(ele)
# print(l)
# print(l1)
# c=0


# a = [85,25,1,32,25,85,54,6]
# b = [85,2]
# c = []

# for i in range(len(a)):
#     for j in range(len(b)):
#         if b[j] not in a:
#             a.append(b[j])
# for i in a:
#     if i not in c:
#         c.append(i)

# print(len(c))

# a=set(l)
# b=set(l1)
# d=a.union(b)
# print(d)
# print(len(d))


class Solution:
    def isValid(self, s: str) -> bool:
        l = []
        for i in s:
            if i in '({[':
                l.insert(0,i)
            else:
                if l:
                    if l[0]+i in ['()','[]','{}']:
                        l.pop(0)
                    else:
                        return False
                else:
                    return False
        if not l:
            return True
        else:
            return False

a=Solution()
b=a.isValid("{}")
print(b)