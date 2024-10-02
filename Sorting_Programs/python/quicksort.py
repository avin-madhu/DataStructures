nums  = [4,2,7,6,1,0,5,3]

def partition(nums, start, end) -> int:
    pivot, i = nums[end], start - 1
    for j in range(start, end):
        if nums[j] < pivot:
            i += 1
            nums[i],nums[j] = nums[j], nums[i]
    i += 1
    nums[i], nums[end] = nums[end], nums[i]
    return i
    

def quicksort(nums, start, end):
    if start < end:
        index = partition(nums, start, end)
        quicksort(nums, start, index-1)
        quicksort(nums, index+1, end)
    return nums
    
nums = quicksort(nums, 0, len(nums)-1)
print(nums)
