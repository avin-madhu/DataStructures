#include<stdio.h>
void insrSort(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current&&j>=0)
      {
        arr[j+1]=arr[j];
        j--;
      }
      arr[j+1]=current;
    }
}
int main()
{
    int arr[100];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the element: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The sorted array is: ");
    printf("\n");

    insrSort(arr,n);

    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}