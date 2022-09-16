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
int main()
{
   int arr[100],n;
   printf("Enter the number of Elements: ");
   scanf("%d",&n);
   printf("Enter the elements: ");

   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }

   bubbleSort(arr,n);
   
   for (int i = 0; i < n; i++)
   {
      printf("%d ",arr[i]);
   }
   
}