#include <stdio.h>
const size = 50;

int isFull();    // <== funtion prototypes
int isEmpty();
int peek();
void push();
int  pop();
void display();

int Queue[size];
int main()
{
    
   int choice=0,f=-1,r=-1,n;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements of the Queue: ");
   
   for(int i=0;i<n;i++)
   {
    scanf("%d",&Queue[i]);
    r++;
   }
   
   do
   {
    printf("\n\n     Menu\n");
   printf("--------------\n");
   printf(" 1.push\n 2.pop\n 3.peek\n 4.isFull\n 5.isEmpty\n 6.display Stack\n 7.Exit");
   printf("\n\n Enter your Choice: ");
   scanf("%d",&choice);

   

   } while (choice!=7);
    

}