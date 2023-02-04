#Binary Search
lis = [int(i) for i in input().split()]
lis = sorted(lis)

print("Sorted List")

print(lis)
left = 0
right = len(lis) - 1

data  = int(input())

while (left < right):
    mid = (left + right)//2

    if (lis[mid]==data) :
        print("Element found in index",mid)
        break
    elif data > lis[mid]:
        left = mid + 1
    else:
        right = mid - 1

    
