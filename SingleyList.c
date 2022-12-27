#include <stdio.h> 
#include <stdlib.h>
  
 struct  node 
 { 
    int data; 
    struct node *next; 
 }; 
  
 struct node *head=NULL,*newNode,*temp,*prev; 
  
int isEmpty()
{
    if(head==NULL)
    {
        return 1;
    }
    else
    return 0;
}
 void insertFirst(int x)
 {
     if(isEmpty())
     {
        head = (struct node*)malloc(sizeof(struct node)); 
        head->data = x;
        head->next = NULL;
     }
     else
     {
        temp = head;
        newNode=(struct node*)malloc(sizeof(struct node)); 
        head = newNode;
        head->data = x;
        head->next = temp;
     }
 }
 void display()
 {
    temp = head;
    printf("The list: ");
    while(temp!=NULL)
    {
       printf("%d ",temp->data);
       temp = temp->next;
    }
    printf("\n");
 }

void deleteFirst()
{
      temp=head;
    if(head == NULL)
    {
        printf("The list is Empty!\n");
    }
    else
    {
    head = head->next;
    temp->next=NULL;
    display();
    }
   
}

void deleteLast()
{
    temp = head;

    if(head==NULL)
    {
        printf("The list is Empty!\n");
    }
    else
    {
     while(temp->next!=NULL)// set temp to the last node
     {
         prev = temp;
         temp = temp->next;
     }
     if(temp==head)
     {
        head=NULL;
     }
    else
    {
     prev->next=NULL;
     temp->next=NULL;
    }
    display();
    }

}
void deleteAny(int x)
{
    temp = head;
    if(head==NULL)
    {
        printf("The lis is Empty!\n");
    }
    else
    {
        while(temp->data!=x&&temp->next!=NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if(head== temp)
    {
        deleteFirst();
    }
    else if(temp->next==NULL)
    {
        deleteLast();
    }
    else 
    {
        prev->next=temp->next;
        temp->next=NULL;
        display();
    }
    }
}

  
 int main() 
 { 
  
     char choice;
     int switchChoice,x;
      
     do 
     {  
       printf("\n1. insert at start\n2. delete at start\n3. delete at last\n4. delete any node\nEnter the operation: ");
       scanf("%d",&switchChoice);
       switch(switchChoice)
       {
        case 1: printf("Enter the number: ");
                scanf("%d",&x);
                insertFirst(x);
                display();break;

        case 2: deleteFirst(); break;

        case 3: deleteLast(); break;

        case 4: printf("Enter the node to be deleted: ");
                scanf("%d",&x);
                 deleteAny(x);break;

        default: printf("Invalid entry!");

       }
      
     printf("continue? (y/n)");
     scanf(" %c",&choice);
  
     }while(choice=='y'); 
  
 }