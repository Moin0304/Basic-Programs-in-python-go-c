def linear(l,key):
   index=0
   a=len(l)
   while index<a:
    if l[index]==key:
       return index
    index+=1
   return -1
l=[10,20,10,30,40]
found=linear(l,40)
print("result:",found)

