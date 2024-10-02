nums  = [4,2,7,6,1,0,5,3]

for i in range(1, len(nums)):
    current = nums[i]
    j = i-1
    while(nums[j]>current and j >= 0):
        nums[j+1] = nums[j]
        j -= 1
    nums[j+1] = current

print(nums)