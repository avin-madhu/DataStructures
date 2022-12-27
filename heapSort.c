#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(int arr[],int n,int i)
{
    int large = i;
    int lc = 2*i + 1;
    int rc = 2*i + 2;

    if(lc<n&&arr[lc]>arr[large])
    large = lc;
    if(rc<n&& arr[rc]>arr[large])
    large = rc;

    if(large!=i)
    {
        swap(&arr[i],&arr[large]);
        heapify(arr,n,large);
    }
}

void heapSort(int arr[],int n)
{
    for(int i= (n/2)-1;i>=0;i--)
    {
       heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
       swap(&arr[0],&arr[i]);
       heapify(arr,i,0);
    }
}

int main()
{
    int arr[] = {1,7,2,8,3,4};
    int n = 6;
    heapSort(arr,n);
     for(int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
}
