#include <stdio.h>

struct prio
{
    int data;
    int p;
}pq[6];

int front =-1, rear = -1;

int isFull()
{
    if(rear == 5)
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
    if(rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(int x, int prio)
{
    rear++;
    pq[rear].data = x;
    pq[rear].p = prio;
}

int getHighestPriority()
{
    int p=-1;
    if(!isEmpty())
    {
        for(int i =0; i<=rear;i++)
       {
        if(pq[i].p>p)
        p= pq[i].p;
       }
    }
    return p;
}

int deleteHighestPrio()
{
    int high;
    int p = getHighestPriority();
     int ele,i;
    for (i =0;i<=rear;i++)
    {
        if(pq[i].p==p)
        {
          ele = pq[i].data;
          high = i;
          break;
        }
    }
   if(i<rear)
   {
       for (int j=i;j<=rear;j++)
       {
        pq[j].data = pq[j+1].data;
        pq[j].p = pq[j+1].p;
       }
   }
   rear--;
   return pq[high].data;
}

void display()
{
    if(!isEmpty())
    {
        for(int i=0;i<=rear;i++)
    {
        printf("| element: %d : priority: %d |\n",pq[i].data,pq[i].p);
    }
    }
    else{
        printf("\nThe queue is Empty!");
    }
}

int main()
{
      int ch,num,numP,p;
      char choice;
      do 
      {
        printf("OPERATION LIST\n---------------------\n1. Insert Element\n2. find highest Priority\n3. delete Highest Priority Element\n4. display\n5. Exit\n---------------------\nEnter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:printf("\nEnter the element: ");
            scanf("%d",&num);
            printf("Enter the priority: ");
            scanf("%d",&numP);
            insert(num,numP);
            break;

        case 2: p = getHighestPriority();
                if(!isEmpty())
                {
                    for(int i =0;i<rear;i++)
                    {
                        if(pq[i].p==p)
                        {
                            printf("| element: %d : Priority: %d |",pq[i].data,pq[i].p);
                            break;
                        }
                    }
                }
                else 
                {
                    printf("\nThe queue is Empty!");
                }
                break;

        case 3: if(!isEmpty())
        {
            int numD = deleteHighestPrio();
               printf("\nHighest Priority is Deleted",numD);
        }
        else
        {
            printf("\nThe queue is Empty!");
        }
        break;

        case 4: if(!isEmpty())
        {
            display();
        }
        else
        {
            printf("\nThe queue is Empty!");
        }break;

        case 5: break;
        
        default:printf("Invalid Entry!");
            break;
        }
      printf("\nWant to continue?(y/n): ");
      scanf(" %c",&choice);
      }while(choice!='n');
}
