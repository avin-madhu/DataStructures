#include <stdio.h>
int count;
struct  node
{
   int data;
   struct node *next;
};

struct node *head,*newNode,*temp;

void Addnode_atRandom() // function to add a node in the given position
{
   int  dataNode;
   int pos;
   printf("Enter the number to be added: ");
   scanf("%d",&dataNode);
   printf("Enter the position to be inserted: ");
   scanf("%d",&pos);
   pos=pos-1;
  if(pos<count)
  {
     newNode=(struct node*)malloc(sizeof(struct node));
   newNode->data=dataNode;
   int i=1;
   temp=head;
   while(i<pos)
   {
    temp=temp->next;
    i++;
   }
   newNode->next = temp->next;
   temp->next=newNode;
  }
  else
  {
    printf("Invalid Input!!");
  }

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

    Addnode_atRandom(); // function call

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