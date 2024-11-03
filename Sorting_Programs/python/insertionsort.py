nums  = [4,2,7,6,1,0,5,3]

for i in range(1,len(nums)-1):
    current = nums[i]
    j = i-1
    while j >=0 and nums[j] > current:
        nums[j+1] = nums[j] # move the element to the right
        j -=1 
    nums[j+1] = current
    
print(nums)