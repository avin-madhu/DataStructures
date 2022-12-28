## Algorithm

## Main ()

step 1: start 

step 2: read the Infix Expression and set the pointer e to the first character.

Step 3:  if e != null charcter do step 4 to 9 else go to step 10

step 4: if character is alpha-numeric display e else goto step 5

step 5: if character is an opening bracket push to stack else go to step 6

step 6: if the charcter is a closing bracket pop all elements before ‘)’ in the stack and print it else goto step 7

step 7: check priority of stack[top] >= priority of e, if true pop and print the element

step 8: push the poped element to stack

step 9: increment e (point to the next character) and goto step 3

step 10: print any leftover elements in the stack after poping

step 11: stop
