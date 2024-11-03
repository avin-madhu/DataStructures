#include <stdio.h>
#define size 6
int dq[size];
int rear=-1,front =-1;
int isFull()
{
    if((front == rear+1)||(front==0&&rear==size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(front==-1&&rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



void insert_front(int x)
{
   if(isFull())
   {
    printf("The Queue is Full!");
   }
   else if(isEmpty())
   {
    front=rear=0;
    dq[front]=x;
   }
   else if(front ==0)
   {
    front = size -1;
    dq[front]=x;
   }
   else
   {
    front--;
   dq[front]=x;
   
   }
}

void insert_rear(int x)
{
    if(isFull())
   {
    printf("The Queue is Full!");
   }
   else if(isEmpty())
   {
    front=rear=0;
    dq[rear]=x;
   }
   else if (rear==size-1)
   {
    rear = 0;
    dq[rear]=x;
   }
   else
   {
    rear++;
    dq[rear]=x;
    
   }
}

void delete_front()
{
    if(isEmpty())
    {
        printf("The queue is Empty!");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else if(front == size -1)
    {
        front =0;
    }
    else{
        front++;
    }
}

void delete_rear()
{
    if(isEmpty())
    {
        printf("The queue is Empty!");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else if(rear == 0)
    {
        rear = size -1;
    }
    else{
        rear--;
    }
}


void disp()
{
    int i = front;

  printf("\nThe Queue: ");
    while(i!=rear)
    {
        printf(" %d",dq[i]);
        i = (i+1)%size;
    }
    printf(" %d",dq[rear]);
}


int main()
{
    int ch,num;
    char con;
    do 
    {
       
       printf("OPERATIONS MENU\n---------------------\n1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n---------------------\nEnter your choice: ");
       scanf("%d",&ch);

       switch(ch)
       {
        case 1: printf("Enter the Number: ");
        scanf("%d",&num);
        insert_front(num);
        disp();break;

        case 2: printf("Enter the Number: ");
        scanf("%d",&num);
        insert_rear(num);
        disp(); break;

        case 3: delete_front();disp();break;

        case 4: delete_rear();disp();break;

        default: printf("Invalid Entry!");

        
       }
       printf("\n\nWant to continue?(y/n): ");
       scanf(" %c",&con);
    }while(con!='n');
}
