def selection(l):
    n=len(l)
    for i in range(n):
        position=i
        for j in range(i+1,n):
            if l[j]<l[position]:
                position=j
        temp=l[i]
        l[i]=l[position]
        l[position]=temp

l=[1, 0, -1, -1, 1, 0, 1, 0]
selection(l)
print(l)
