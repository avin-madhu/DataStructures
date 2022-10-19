#include<stdio.h>

void simpleMerge(int a[],int f,int s,int t) // f = first element in arr1, s = first element in arr2 ,l = last element in arr2
{
 
 int b[100]; // <-- Temporary array
 int i=f,j=s,k=0;

 while(i<s&&j<=t)
 {
    
 }


}


 void mergeSort(int a[],int l,int r)  // l= left element and r = right element 
{
   int mid;

   if(l<r)
   {
    mid = (l+r)/2;
    mergeSort(a,mid+l,r);            // <-- Recursive Call
    simpleMerge(a,l,mid+l,r);
   }
}

int  main()
{
   int arr[100];
   int n,f=0,s,t;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the element: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mergeSort(arr,f,n-1);

    printf("The sorted array is: ");
    printf("\n");

    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}

