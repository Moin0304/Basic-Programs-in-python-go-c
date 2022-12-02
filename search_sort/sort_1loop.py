# from time import time

# start=time()
# def sort_1loop(l):
#     i=0
#     x=len(l)-1
#     j=x
#     while True:
#         if i==x:
#             break
#         elif l[j]<l[i]:
#             temp=l[i]
#             l[i]=l[j]
#             l[j]=temp
#         j-=1
#         if j==i:
#             i+=1
#             j=x
           
        
#         print(l)
# l=[1,9,6,3,4,2,6,-1,0]
# sort_1loop(l)
# print(l)
# end=time()
# print(end-start)




# l=[1,9,6,3,4,2,6,-1,0]
# l1=[]
# for i in range(len(l)):
#     a=min(l)
#     l1.append(a)
#     l.remove(a)
# print(l1)

def sort_arr(arr):
    start = mid = 0
    end = len(arr) - 1

    while mid < end :
        if arr[mid] == -1:
            swap(arr, start, mid)
            start += 1
        elif arr[mid] == 1:
            swap(arr, mid, end)
            end -= 1
        else:
            mid += 1


def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]


def main():
    arr = [1, 0, -1, -1, 1, 0, 1, 0]
    # arr = [0, 1, 0, 1, -1, 0, -1, -1,2,5,8] 
    # print(arr)
    sort_arr(arr)
    print(arr)

if __name__ == "__main__":
    main()