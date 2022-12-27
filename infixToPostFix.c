#include <stdio.h>
char stack[50];
int top = -1;

void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
int priority(char x)
{
    if(x =='(')
    return 0;

    if(x=='+'||x=='-')
    return 1; 

    if(x=='*'||x=='/')
    return 2;

    if(x=='^')
    return 3;
}

int alNum(char x)
{
 if(x!='('&&x!='-'&&x!='+'&&x!='*'&&x!='/'&&x!='^'&&x!=')'&&x!='\0')
 {
    return 1;
 }
 else
 {
    return 0;
 }    
}

int main()
{
    char exp[50],*e,x;
    printf("Enter the Expression: ");
    scanf("%s",exp);

    e = exp; // the pointer e point to the first charcter in the string 

    printf("The postfix Expression: ");

    while(*e!='\0')
    {
        if(alNum(*e))
        {
          printf("%c",*e);
        }
        else if(*e =='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
            while((x=pop())!='(')
            printf("%c",x);
        }
        else
        {
            while(priority(stack[top])>=priority(*e))
            printf("%c",pop());
            
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
}
