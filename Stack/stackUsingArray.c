#include <stdio.h>

int isFull();    // <== funtion prototypes
int isEmpty();
int peek();
void push();
int  pop();
void display();

int size=50;
int stack[50],top=0,el; // <== declared a stack(array) of size 50 (globally)

int main()
{
   int choice=0,n,x=0;
   char ch;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements of the stack: ");
   
   for(int i=0;i<n;i++)
   {
    scanf("%d",&stack[i]);
    top++;
   }
   
   do
   {
    printf("\n\n     Menu\n");
   printf("--------------\n");
   printf(" 1.push\n 2.pop\n 3.peek\n 4.isFull\n 5.isEmpty\n 6.display Stack\n 7.Exit");
   printf("\n\n Enter your Choice: ");
   scanf("%d",&choice);

   switch(choice)
   {
    case 1: if(!isFull(top))
             {
                printf("Enter the element to be pushed: ");
                scanf("%d",&el);
                push(el);
             }
             break;
    case 2: if(!isEmpty())
             {
               el=pop();
               printf("The element poped is: %d ",el);
             }
             break;
    case 3: x=peek();
            if(x!=-1)
            {
                printf("Element is present at Top at index: %d",top);
            }
            x=0;
             break;   

    case 4: isFull();break;

    case 5: isEmpty();break;

    case 6: display();break;

    case 7: break;

    default: printf("Invalid Input!!");
   }

   printf("\nWant to continue? (y/n): ");
   scanf(" %c",&ch);
   } while (choice!='y');
   
 return 0;
}

// ----- function defintions-----

int isFull()
{
    if(top==size)
    {
      printf(" Stack is Full!!");
      return 1;
    }
    else
    {
       return 0;
    }
}

int isEmpty()
{
    if(top==0)
    {
        printf(" Stack is Empty!!");
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if(isEmpty())
    {
        printf(" Stack is Empty !!");
    }
    else
    {
        return stack[--top];
    }
    return -1;
}

void push()
{
    if(isFull())
    {
        printf("Stack is Full !!");
    }
    else
    {
        stack[top++]=el;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack is Empty!!");
    }
    else
    {
       return top--;
    }
    return -1;
}

void display()
{
    for(int i=0;i<top;i++)
    {
       printf(" %d",stack[i]);
    }
}