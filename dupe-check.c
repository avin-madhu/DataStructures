/*c program for entering some values and find how many times each number repeats*/

#include<stdio.h>
void dupe(int a[10]);
int num;
int main()
{
    int a[20];

    printf("Enter the number of values: ");
    scanf("%d",&num);
    printf("enter the numbers: ");
    
    for(int i=0;i<num;i++)
    scanf("%d",&a[i]);

    dupe(a);
    return 0;
}

void dupe(int a[])
{
    int count=1;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(a[i]==a[j]&&i!=j)
            count++;
            
        }
        printf("%d occurs %d times",a[i],count);
        printf("\n");
        count=1;
    }

}
