def partition(nums,start,end):
    pivot = nums[end]
    i = start-1
    for j in range(start,end+1):
        if pivot > nums[j]:
            i += 1
            nums[j],nums[i] = nums[i],nums[j]
    i += 1
    nums[i],nums[end] = nums[end],nums[i]
    return i

def quicksort(nums,start,end):
    if end < start:
        return
    index = partition(nums,start,end)
    quicksort(nums,start,index-1)
    quicksort(nums,index+1,end)

nums  = [4,2,7,6,1,0,5,3]

quicksort(nums,0,len(nums)-1)

print(nums)