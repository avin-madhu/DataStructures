## algorithm

### Swap () 
step 1: start

step 2: swap * a and *b
step 3: stop

### Heapify ()

step 1: start

step 2: set large = i, left child = 2*i, right child = 2*i + 1

step 3: check left child < size and arr[left] > arr[large] if true set large = arr[left] else continue

step 4: check right child < size and arr[right] > arr[large] if true set large = arr[right] else continue

step 5: check if large is updated if true do step 6 and step 7

step 6: swap arr[i] and arr[large]

step 7: heapify()

step 8: stop

### Heapsort ()

step 1: start

step 2: set i = (n/2) -1 

step 3: check i>=0, if true do step 4 else go to step 6

step 4: heapify()

step 5: decrement i and goto step 3

step 6: set i = n-1

step 7: check i>=0, if true do step 8 else goto step 10

step 8: swap arr[0] and arr[i]

step 9: heapify()

step 10: stop
