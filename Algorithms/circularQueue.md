## algorithm

### IsEmpty ()

step 1: start

step 2: check front = (rear+1) mod Size , if true return 1 else return 0

step 3: stop

### IsFull ()

step 1: start

step 2: check front = -1 and rear = -1, if true return 1 else return 0

step 3: stop

### dequeue()

step 1: start

step 2: if empty display “Queue is empty” else go to step 3

step 3: check front = rear, if true continue else go to step 5

step 4: set front and rear = -1and return

step 5: set front = (front +1)mod Size and return

### enqueue()

step 1: start

step 2: if Full display “Queue is Full” else go to step 3

step 3: if Empty set f=r=0 and set queue[rear] = element and increment rear else goto step 4

step 4: set queue[rear] = element and set rear = (rear+1)mod Size

step 5: stop
