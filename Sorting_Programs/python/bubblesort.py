nums  = [4,2,7,6,1,0,5,3]

#bubble sort
for i in range(len(nums)):
    for j in range(i+1,len(nums)):
        if nums[i] > nums[j]:
            nums[i],nums[j] = nums[j], nums[i]

print(nums)
 


