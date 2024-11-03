def merge(nums,start,mid,end):
    temp = []
    i = start
    j = mid+1
    print(nums[start:end+1])
    while i<=mid and j <= end:
        if nums[i]<=nums[j]:
            temp.append(nums[i])
            i+=1
        else:
            temp.append(nums[j])
            j+=1
    while i<=mid:
        temp.append(nums[i])
        i+=1
    while j <=end:
        temp.append(nums[j])
        j+=1
    j = 0
    for i in range(start,end+1):
        nums[i] = temp[j]
        j+=1

def mergesort(nums,start,end):
    if start<end:
        mid = (start+end)//2
        mergesort(nums,start,mid)
        mergesort(nums,mid+1,end)
        merge(nums,start,mid,end)

nums  = [4,2,7,6,1,0,5,3]

mergesort(nums,0,len(nums)-1)

print(nums)