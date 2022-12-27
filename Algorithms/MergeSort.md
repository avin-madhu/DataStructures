# Algorithm

## simpleMerge() 
  step 1: Start
  
  step 2: while i<s and j<=t continue to step 3 else go to step  6
  
  step 3: take first element in first array and second element in second array and check a[i] < a[j]
  
  step 4: if step 3 is true insert a[i] in the temporary array else add a[j] in the temporary array 
  
  step 5: increment i and j and go to step 2
  
  step 6: while  i <s insert the leftover elements in left array (if any) to temporary array
  
  step 7: while j<=t insert the leftover elements in right array (if any) to temporary array
  
  step 8: set i=f and k =0
  
  step 9: check k<t if true continue to step 10 else go to step  11
  
  step 10: a[i++] = b[k++] (copying elements from temporary array to original array) and go to step 9
  
  step 11: Stop

## mergeSort()

  step 1: Start
  
  step 2: if l<r the continue else go to step 6
  
  step 3: set mid = (l+r)/2
  
  step 4: recursive call for left array and recursive call for right array
  
  step 5: call simpleMerge(a,l,mid+1,r)
  
  step 6: Stop
