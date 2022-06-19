#include<stdio.h>
int main()
{
    int num,i,check=0;
     printf("enter the number: ");
     scanf("%d",&num);
     
     if(num==1||num==0)
     {
     check=1;
     }
     
     for(i=2;i<=num/2;i++)
     {
        if(num%i==0)
        {
            check=1;
            break;
        }
     }
     if(check==0)
     printf("prime number");
     else
     printf("not a prime number");
     
     return 0;
}