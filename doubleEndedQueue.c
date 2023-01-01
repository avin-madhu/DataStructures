#include<stdio.h>
#define size 5
int F =-1, R =-1, Q[size];

int is_full()
{
	if(F==(R+1)%size)
		return(1);
	else
		return(0);
}

int is_empty()
{
	if(F==-1 && R==-1)
		return(1);
	else
		return(0);
}
void Insert_rear(int ele)
{
  R=(R+1)%size;
  if(F==-1)
  F=0;
  Q[R]=ele;
}
void Insert_front(int ele)
{
if(F==-1)
F=R=0;
else
{
if(F==0)
F=size-1;
else
F=F-1;
}
Q[F]=ele;
}
int Delete_rear()
{
 int ele=Q[R];
 if(F==R)
 F=R=-1;
else
{
 if(R==0)
 R=size-1;
 else
 R=R-1;
 return (ele);
}
}
int Delete_front()
{
 int ele=Q[F];
{
 if(F==R)
 F=R=-1;
 else
 F=(F+1)%size;
 }
 return(ele);
 }
void Display()
{
 if(is_empty())
		printf("QUEUE IS EMPTY");
	else
	{
		int i;
		for(i=F;i!=R;i=(i+1)%size)
			printf("%d \n",Q[i]);
		printf("%d \n",Q[R]);
	}
}
void main()
{
 int choe,ele;
do
{
printf("\n The choice are: \n1.Insert_rear\n2.Insert_front\n3.Delete_rear\n4.Delete_front\n5.Isfull\n6.Isempty\n7.Display\n8.Exit\n");
printf("Enter your choice required:");
			scanf("%d",&choe);
			switch(choe)
			{
				case 1: if(is_full())
						printf("QUEUE FULL");
					else
					{
						printf("\nEnter the number to be inserted:");
						scanf("%d",&ele);
						Insert_rear(ele);
					}
					break;

				case 2: if(is_full())
						printf("QUEUE FULL");
					else
					{
						printf("\nEnter the number to be inserted:");
						scanf("%d",&ele);
						Insert_front(ele);
					}
					break;


				case 3: if(is_empty())
						printf("QUEUE IS EMPTY");
					else
					{
						ele=Delete_rear();
						printf("The deleted element is %d",ele);
					}
					break;

				case 4: if(is_empty())
						printf("QUEUE IS EMPTY");
					else
					{
						ele=Delete_front();
						printf("The deleted element is %d",ele);
					}
					break;

				case 5: if(is_full())
						printf("QUEUE FULL");
					else
						printf("SPACE AVAILABLE");
					break;

				case 6: if(is_empty())
						printf("QUEUE IS EMPTY");
					else
						printf("MEMBERS OCCUPIED");
					break;

				case 7: printf("\nThe elements in the Queue :\n");
					Display();
					break;
				
				case 8: break;

				default : printf("\nINVALID");
			}
		}while(choe!=8);
	}
		
