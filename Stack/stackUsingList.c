#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node  *head=NULL,*prev,*temp,*newNode,*top;

void display()
 {
    temp = head;
    printf("The Stack: ");
    while(temp!=NULL)
    {
       printf("%d ",temp->data);
       temp = temp->next;
    }
    printf("\n");
 }


void push(int x)
{
    if(head==NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->data=x;
        head->next=NULL;
        top = head;
        display();
    }
    else
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        top->next=newNode;
        top=top->next;
        top->data=x;
        top->next=NULL;  
        display();
    }
    
}

int pop()
{
    temp = head;
    int x;
     if(head==NULL)
     {
        printf("The stack is empty!\n");
        return -1;
     }
     else
     {
         x = top->data;
        while(temp->next!=NULL)// set temp to the last node
     {
         prev = temp;
         temp = temp->next;
     }

     if(temp==head)
     {
        head =NULL;
     }
    else
    {
         top = prev;
     top->next=NULL;
     display();
    }
     }
    return x;
}

int main()
{
    int choice;
    int x;
   do 
   {
     printf("1. Push\n2. Pop\n3. exit\n\nEnter the operation: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Enter the number: ");
                scanf("%d",&x);
                push(x);break;
        case 2: x = pop();
               if(x==-1)
               {

               }
               else
                printf("%d is popped\n",x);break;
        case 3: break;
    }
   }while(choice!=3);
}