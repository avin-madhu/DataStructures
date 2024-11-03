/**Queue using linked list */

#include <stdio.h> 
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;

struct node *f=NULL,*r=NULL,*temp;

int empty()
{
    if(f==NULL&&r==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insert(int x)
{
    if(empty())
    {
        f=r= (struct node*)malloc(sizeof(Node));
        f->data=x;
        f->next=NULL;
        printf("\n\nFirst node");
    }
    else
    {
       temp =  (struct node*)malloc(sizeof(Node));
       temp->data=x;
       temp->next=NULL;
       r->next = temp;
       r = temp;
    }
}
void delete()
{
     int x;
     if(empty())
     {
        printf("The stack is empty");
     }
     else if(f==r)
     {
        x = f->data;
        f=r=NULL;
        printf("%d was removed!",x);
     }
     else
     {
        x = f->data;
        f=f->next;
        printf("%d was removed!",x);
     }
}
void display()
{
    temp = f;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    char ch;
    int choice,x;
   do
   {
   printf("\n\nEnter the operation: \n-------------------\n1. insert\n2. delete\n3. display\n-------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\nEnter the number to be inserted: ");
                scanf("%d",&x);
                insert(x);break;

        case 2: delete();break;
                
        case 3: display();break;
    }
    printf("  continue? (y/n): ");
    scanf(" %c",&ch);
   }while(ch=='y');
}



















































