/** Program to convert an Epression to Postfix Expression */
#include <stdio.h>
int main()
{
    char inExp[50], postFix[50];
    int j = 0;
    printf("Enter the expression: ");
    scanf("%[^\n]",inExp);
    int token;
    for(int i=0; i<5;i++)
     token = inExp[i];
     
     int i=0;
    switch (token)
    {
       case '(': push(inExp[i++]);break;
       case '*': 
       case '+':
       case '-':
       case '/': while (isEmpty()&&inExp[peek()]>inprio(token))
       {
        
        postFix[j++] = pop();
        push(token);break;
       }
    }
}