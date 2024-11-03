def partition(nums,start,end):
    pivot = nums[end]
    i = start-1
    for j in range(start,end+1):
        if pivot > nums[j]:
            i += 1
            # swap the numbers 
            nums[i],nums[j] = nums[j],nums[i]
    i += 1
    nums[i],nums[end] = nums[end],nums[i]
    return i

def quicksort(nums,start,end):
    if start > end:
        return
    index = partition(nums,start,end)
    quicksort(nums,index+1,end)
    quicksort(nums,start,index-1)

def main():
    nums = [2,4,6,7,1,3,5]
    quicksort(nums,0,len(nums)-1)
    print(nums)

if __name__ == "__main__":
    main()