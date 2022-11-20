#include<stdio.h>
void selectSort(int arr[],int n)
{
  int j;
  for(int i=0;i<n-1;i++)
  {
    int ind=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[ind])
      {
        ind=j;
      }
    }
        int temp=arr[i];
        arr[i]=arr[ind];
        arr[ind]=temp;
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

  selectSort(arr,n);
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  }