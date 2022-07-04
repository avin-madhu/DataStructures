#include<stdio.h>
int main()
 
 {
    
   int i,a[3][3],b[3][3],c[3][3];
   printf("enter the elements for first matrix: ");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("enter a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
   }

   printf("enter the elements for second matrix: ");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("enter b%d%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
   }

   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
       c[i][j]=a[i][j]+b[i][j];
    }
   }

   printf("the sum is: ");
   printf("\n\n");

   for(int i=0;i<3;i++)
   {
    
    for(int j=0;j<3;j++)
    {
        printf("%d ",c[i][j]);
    }
    
    printf("\n");
   }
   return 0;

 }