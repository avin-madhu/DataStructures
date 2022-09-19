#include<stdio.h>
int partition(int arr[],int start,int end)
{
    int key = arr[start];
    int i = start +1;
    int j = end;
    int temp;
 do{
    while(arr[i]<=key)
    {
        i++;
    }
    while(arr[j]>key)
    {
        j--;
    }
    if(i<j)
    {
       temp = arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }

    }while (i<j);

    temp = arr[start];
    arr[start]=arr[j];
    arr[j]=temp;

   return j;
    

}
void QuickSort(int arr[],int start,int end)
{
    if(start<end)
    {     
      int index=partition(arr,start,end);//  1 4 2 6 3 7
      QuickSort(arr,start,index-1);
      QuickSort(arr,index+1,end);
    }
}
int  main()
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

    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}
