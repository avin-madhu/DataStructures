/*Program to create a linked list and adda new node on users chice and the print the list in the end*/

#include <stdio.h>

struct  node
{
   int data;
   struct node *next;
};

struct node *head,*newNode,*temp;


int main()
{

    int choice;
    head = 0;
    do
    { 
    newNode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the number: ");
    scanf("%d",&newNode->data); //32
    newNode->next=0;

 if(head==0)
 {
    head=temp=newNode;
 }
 else
 {
    temp->next=newNode;
    temp=newNode;
 }

 printf("Do You wish to add a new element?\n\nyes - 1\nno - 0\n\n");
 scanf("%d",&choice);

    }while(choice==1);

    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}