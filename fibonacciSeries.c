#include<stdio.h>
int main()
{  
    int t1=0,t2=1,prev;
    printf("%d %d ",t1,t2);
    prev=t1+t2;
    printf("%d ",prev);
    for(int i=3;i<=50;++i)
    {
        t1=t2;
        t2=prev;
        prev=t1+t2;
        
        printf("%d ",prev);
    }
    return 0;
}