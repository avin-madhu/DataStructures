#include<stdio.h>
lnrSrch(int arr[],int n,int num)
{
    int flag=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            pos=i;
            return pos;
        }
    }

    return -1;
}
int main()
{
    int arr[100],n,num,check;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the elements: ");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Enter the Element to be Searched: ");
    scanf("%d",&num);
    printf("\n");

    check = lnrSrch(arr,n,num);
    
    if(check==-1)
    {
        printf("Element not found!!");
    }
    else
    {
        printf("Element found at position %d",check+1);
    }
    
}