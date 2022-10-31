#include <stdio.h>
int count;
struct  node
{
   int data;
   struct node *next;
};

struct node *head,*newNode,*temp;

void Addnode_atEnd()  // function to insert a node at the end
{
    
   int  dataNode;
   printf("Enter the number to be added at the End: ");
   scanf("%d",&dataNode);
   newNode=(struct node*)malloc(sizeof(struct node));
   newNode->data=dataNode;
   temp=head;
   while(temp->next!=0)
   {
    temp = temp->next;
   }
   temp->next=newNode;
   temp=temp->next;
   temp->next=0;

}

int main()
{

    int choice;
    head = 0;
    do
    { 
    newNode=(struct node*)malloc(sizeof(struct node));   // creating a new node 

    printf("Enter the number: ");
    scanf("%d",&newNode->data);  //reading a data
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

    }while(choice==1);   // iterating using a "do while" to add more data

    printf("The list Entered: ");

     temp=head;
     count=0;
   do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    } while(temp->next!=0);

    printf("\n\n");
    
    Addnode_atEnd();  // function call

     printf("The list Now: ");

     temp=head;
     count=0;
   do
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    } while(temp->next!=0);

}