## Algorithm

 ### step 1: Start
 ### step 2: Set top = 0 and bot = n-1
 ### step 3: Check top<=bot
 ### step 4: If step 3 is true continue executing step 5 - step 9 else go to step 10
 ### step 5: Set mid = (top/mid)/2;
 ### step 6: Check arr[mid] == num
 ### step 7: If true, return mid else continue to step 8
 ### step 8: Check arr[mid] < num
 ### step 9: If true set top = mid + 1 else bot = mid – 1 and go to step 3
 ### step 10: return -1 (element not found!)
 ### step 11: stop
