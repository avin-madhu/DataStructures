#include<stdio.h>
bubbleSort(int arr[],int n)
{
    
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-i-1;j++)
    {   
        int temp;
        if(arr[j]>arr[j+1])
        {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
   }
}

binSearch(int arr[],int n,int num)
{
  int top=0,bot=n-1;

  while (top<=bot)
  {
    int mid=(top+bot)/2;

    if(arr[mid]==num)
    {
        return mid;
    }
    else if(arr[mid]<num) 
    {
      top=mid+1;
    }
    else
    {
      bot =mid-1;
    }
  }
  return -1;
}

int main()
{
   int arr[100],n,num,check;
   printf("Enter the number of Elements: ");
   scanf("%d",&n);
   printf("\n\n");
   printf("Enter the elements: ");
   
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("\n\n");
   bubbleSort(arr,n);
   printf("Sorted elements: ");
   for (int i = 0; i < n; i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n\n");
   printf("Enter the number to be searched: ");
   scanf("%d",&num);
   printf("\n\n");
   check = binSearch(arr,n,num);
   if(check==-1)
   {
    
    printf("Element not found!!");
   }
   else
   {
    printf("Element is found at position %d",check+1);
   }
   
}