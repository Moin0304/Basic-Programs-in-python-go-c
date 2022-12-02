def binary(l,key):
    s=0
    e=len(l)-1
    while s<e:
        mid=(s+e)//2
        if key==l[mid]:
            return mid
        elif key<l[mid]:
            e=mid-1
        elif key>l[mid]:
            s=mid+1
    return -1

l=[2,3,6,9,7]
found=binary(l,9)
print("result:",found)