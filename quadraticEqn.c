#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,q,root1,root2;
    printf("enter the coefficients: ");
    scanf("%f %f %f",&a,&b,&c);
    q=b*b-4*a*c;
    if (q>0)
    {
        root1=(-b+sqrt(q))/2;
        root2=(-b-sqrt(q))/2;
        printf("the roots are: %f and %f",root1,root2);
    }
    else if(q=0)
    {
        root1=-b/2;
        root2=-b/2;
        printf("the root are: %f and %f",root1,root2);
    }
    else
    {
      printf("the root are not defined or imaginary!!");
    }
    return 0;
}