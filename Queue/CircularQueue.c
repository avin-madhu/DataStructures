#include <stdio.h>
#include <math.h>
#define size 50
int queue[size];
int f=-1,r=-1,el=0;

int isFull()
{
   if(f==(r+1)%size)
   return 1;
   else
   return 0;
}
int isEmpty()
{
   if(f==-1&&r==-1)
   return 1;
   else
   return 0;
}
void enqueue(int el)
{
   if(isFull())
   {
   printf("The queue is empty!! cannot remove element!"); return;
   }
else
   {
   if(isEmpty())
   {
      f=r=0;
      queue[r++]=el;
   }
else
  {
   queue[r]=el;
   r=(r+1)%size;
   }
  }
}
void dequeue()
   {
    if(isEmpty())
     {
      printf("The queue is Empty!, deletion not possible."); return;
     }
  else
  {
    if(f==r)
    {
    el = queue[f];
    printf("%d is removed!",el);
    f=r=-1;
    return;
    }
else
   {
   el = queue[f];
   printf("%d is removed!",el);
   f=(f+1)%size;
   return;
   }
  }
}
void display()
  {
   for(int i=f;i<r;i++)
   printf("%d ",queue[i]);
  }
int main()
{
int choice,flag=0;
char ch;
do
{
printf("Menu list\n--------------------------\n\n1. Insert\n2. Delete\n3. display\n4. is Full?\n5. is Empty?\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the element: ");
scanf("%d",&el);
enqueue(el);break;

case 2: dequeue();
break;

case 3: display();break;

case 4: flag = isFull();
        if(flag==1)
        printf("The queue is Full!");
        else
        printf("The queue is not full");break;

case 5: flag = isEmpty();
        if(flag==1)
        printf("The queue is Empty!");
        else
        printf("The queue is not Empty");break;


default: printf("Invalid Entry!!"); break;
}
printf("\n----------------------\ncontinue? (y/n): ");
scanf(" %c",&ch);
 }while(ch=='y');
}