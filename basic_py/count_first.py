#First non-repeating character in a word

s=input("enter a word : ")
c=0
for i in s:
    for j in s:
        if i==j:
            c+=1
            
    if c==1:
        print(i)
        break
    else:
        c=0



    
    


    


    
  