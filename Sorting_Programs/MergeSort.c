#include<stdio.h>

int  main()
{
   int arr[100];

    int n,f,s,t,mid;


    printf("Enter the number of elements: ");
    scanf("%d",&n);
    mid =n/2 + 1;
    printf("\n");
    printf("Enter the element: ");


    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    printf("The sorted array is: ");
    printf("\n");



    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}

