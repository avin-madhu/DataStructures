#include<stdio.h>
#include<stdlib.h>
struct Node
{
            int coef;
            int expo;
            struct Node *next;
};
        typedef struct Node node;
        node *poly1, *poly2, *poly3 = NULL;
        node *p1, *p2, *p3;
        node *newnode()
{
            node *p;
            p = (node *)malloc(sizeof(node));
            p->next = NULL;
            return p;
}

void print(node *a)
{
    node *curr;
    curr = a;
    printf("\nf(x) =");
    while (curr != NULL)
    {
        printf(" %d(x^%d) ",curr->coef,curr->expo);
        curr = curr->next;
        if(curr != NULL)
        {
            printf("+");
        }
    }
}

node *read(node *a)
{
    int i=0,c[10],e[10],ch;
    node *curr, *p;
    printf("\n\nEnter the coeficient & power of polynomial Expression in order :-\n");
    do
    {
        printf("Enter the coeficient :");
        scanf("%d",&c[i]);
        printf("Enter the power :");
        scanf("%d",&e[i]);
        printf("Do you want to continue(1,0) :");
        scanf("%d",&ch);
        i++;
    }while(ch!=0);
    while (i!=0)
    {
        i--;
        p=newnode();
        p->coef = c[i];
        p->expo = e[i];
        if (a==NULL)
        {
            a=p;
        }
        else
        {
            p->next=a;
            a=p;
        }
    }
    print(a);
    return(a);
}

void Addpoly()
{
    node *p1, *p2, *p3;
    p1=poly1;
    p2=poly2;
    p3=newnode();
    poly3=p3;
    while (p1!=NULL && p2!=NULL)
    {
        if(p1->expo==p2->expo)
        {
            p3->coef=p1->coef+p2->coef;
            p3->expo=p1->expo;
            p1=p1->next;
            p2=p2->next;
        }
        else
        {
            if(p1->expo > p2->expo)
            {
                p3->expo=p1->expo;
                p3->coef=p1->coef;
                p1=p1->next;
            }
            else
             {
                p3->expo=p2->expo;
                p3->coef=p2->coef;
                p2=p2->next;
            }
        }

        if(p1!=NULL && p2!=NULL)
        {
            p3->next=newnode();
            p3=p3->next;
        }
    }
    while(p1!=NULL)
    {
        p3->next=newnode();
        p3=p3->next;
        p3->expo=p1->expo;
        p3->coef=p1->coef;
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        p3->next=newnode();
        p3=p3->next;
        p3->expo=p2->expo;
        p3->coef=p2->coef;
        p2=p2->next;
    }
}

void main()
{
    poly1=read(poly1);
    poly2=read(poly2);
    Addpoly();
    printf("\n\nThe Sum of poly1 and poly2 is:\n");
    print(poly3);
}
