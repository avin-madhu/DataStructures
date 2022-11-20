# Algorithm

## Partition() 
 ### step 1: Start
 ### step 2: Set i = start
 ### step 3: Set j = end 
 ### step 4: i++ until an element > key is found 
 ### step 5: j-- until an element < key is found 
 ### step 6: swap arr[i] and arr[j] 
### step 7: if i<j go to step 4 else continue to step 8
### step 8: Swap key and arr[j]
### step 9: return j
### step 10: Stop
## Quicksort()
### step 1: Start
### step 2: if start<end continue else go to step 6
### step 3: catch return value of partition() to index
### step 4: call Quicksort (arr,start,index-1)
### step 5: call Quicksort (arr,index+1,end)
### step 6: stop