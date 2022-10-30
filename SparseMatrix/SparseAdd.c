#include <stdio.h>

int count=0;
int isSparse(int r,int c,int Spar[r][c]) // logic: if number of 0s is more than half of total elements then the matrix is sparse.
{
   int el;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            el = Spar[i][j];
            if(el==0)
            {
                count++;
            }
        }
    }
    if(count>=((r*c)/2))
    {
        return 1;
    }
    else{
        return 0;
    }
}


void convToTuple(int r,int c,int Spar[r][c]) // convert the sparse matrix to tuple form 
{
   int Tuple[100][3];
   int s=0;
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(Spar[i][j]!=0)
            {
               Tuple[s][0]=i+1;
               Tuple[s][1]=j+1;
               Tuple[s][2]=Spar[i][j];
            }
            else
            {
                Tuple[i][j]=0;
            }
        } 
        s++;
    }

    for(int i=0;i<count+1;i++)
    {
       for(int j=0;j<3;j++)
      {
        Spar[i][j]=Tuple[i][j];
      }
    }
}

void printTuple(int r,int c,int Spar[r][c])
{
    for(int i=0;i<count+1;i++)
    {
       for(int j=0;j<3;j++)
      {
        printf("%d ",Spar[i][j]);
      }
      printf("\n");
    }
}


int main()
{
    int r,c;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the number of coloumns: ");
    scanf("%d",&c);
    int Spar[r][c];

    printf("Enter the sparse matrix: ");  
    
   
    for(int i=0;i<r;i++)    // Reading the sparse matrix
    {
       for(int j=0;j<c;j++)
      {
        scanf("%d", &Spar[i][j]);
      }
    }

       int check=isSparse(r,c,Spar);
       convToTuple(r,c,Spar);
       printTuple(r,c,Spar);
}