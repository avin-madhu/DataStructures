#include <stdio.h>
#include <math.h>
int main() {
    int num,num2=0, rem=0, result = 0,digcount=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    num2 = num;
    result=num;


   while(num!=0)
   {
      num=num/10;
      digcount++;
   }

    while (num2 != 0)
    {
        rem =num2 % 10;     
       result = result*10 + pow(rem,digcount);
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
