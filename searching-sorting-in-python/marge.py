def margesort(list):                   
    if len(list)>1:
        mid=len(list)//2                
        left=list[:mid]                 
                                                     
        right=list[mid:]                 
                                                    

        margesort(left)
        margesort(right)

        i=0         
        j=0        
        k=0         
        while i <len(left) and j<len(right):
            if left[i]<right[j]:
                list[k]=left[i]
                i+=1
            else:
                list[k]=right[j]
                j+=1
            k+=1

        while i<len(left):
            list[k]=left[i]
            i+=1
            k+=1
        while j<len(right):
            list[k]=right[j]
            j+=1
            k+=1

num=int(input("how many elements u want in list: "))
list=[int(input())for x in range(num)]
margesort(list)
print("sorted list:",list)