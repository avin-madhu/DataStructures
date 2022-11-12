#include <stdio.h>

int isFull();    // <== funtion prototypes
int isEmpty();
int peek();
void enqueue();
int  dequeue();
void display();

int size=50;
int Queue[50],f=-1,r=-1,el; // <== declared a Queue(array) of size 50 (globally)

int main()
{
   int choice=0,n,x=0;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements of the Queue: ");
   f=r=0;
   for(int i=0;i<n;i++)
   {
    scanf("%d",&Queue[i]);
    r++;
   }
   
   do
   {
    printf("\n\n     Menu\n");
   printf("--------------\n");
   printf(" 1.enqueue\n 2.dequeue\n 3.peek\n 4.isFull\n 5.isEmpty\n 6.display Queue\n 7.Exit");
   printf("\n\n Enter your Choice: ");
   scanf("%d",&choice);

   switch(choice)
   {
    case 1: if(!isFull())
             {
                printf("Enter the element to be enqueueed: ");
                scanf("%d",&el);
                enqueue(el);
             }
             break;
             
    case 2: if(!isEmpty())
             {
               el=dequeue();
               printf("The element dequeueed is: %d ",el);
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

   printf("\nDo you want to exit (Enter 7)? else enter any other number: ");
   scanf("%d",&choice);
   } while (choice!=7);
   
 return 0;
}

// ----- function defintions-----

int isFull()
{
    if(r==size)
    {
      printf(" Queue is Full!!");
      return 1;
    }
    else
    {
        printf(" Queue have space left\n");
       return 0;
    }
}

int isEmpty()
{
    if(top==0)
    {
        printf(" Queue is Empty!!");
        return 1;
    }
    else
    {
        printf(" Queue have elements present\n");
        return 0;
    }
}

int dequeue()
{
    if(isEmpty())
    {
        printf(" Queue is Empty !!");
    }
    else
    {
        return Queue[--top];
    }
    return -1;
}

void enqueue()
{
    if(isFull())
    {
        printf("Queue is Full !!");
    }
    else
    {
        Queue[top++]=el;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("Queue is Empty!!");
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
       printf(" %d",Queue[i]);
    }
}


