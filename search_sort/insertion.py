def insertion(l):
    n=len(l)
    for i in range(1,n):
        cvalue=l[i]
        pos=i
        while pos>0 and l[pos-1]>cvalue:
            l[pos]=l[pos-1]
            pos=pos-1
        l[pos]=cvalue

l=[1, 0, -1, -1, 1, 0, 1, 0]
insertion(l)
print(l)