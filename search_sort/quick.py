def partition (a,low,high):
    pivot=a[low]
    i=low+1
    j=high
    while True:
        while i<=j and a[i]<=pivot:
            i=i+1
        while i<=j and a[j]>pivot:
            j=j-1
        if i<=j:
            a[i],a[j]=a[j],a[i]
        else:
            break
    a[low],a[j]=a[j],a[low]
    return j

def quicksort(a,low,high):
    if low<high:
        pi=partition(a,low,high)
        quicksort(a,low,pi-1)
        quicksort(a,pi+1,high)
    
a=[3,4,5,6,2,1,9]
quicksort(a,0,len(a)-1)
print("sorted array: ",a)