#include <stdio.h>
void MergeSort(int arr[],int f,int s,int l) {
int b[25];
int k=0,i=f,j=s;
while(i<s&&j<=l)
{
   if(arr[i]<arr[j])
   {
   b[k++]=arr[i++];
   }
   else
   {
   b[k++]=arr[j++];
   }
}
while(i<s)
   {
   b[k++]=arr[i++];
   }
while(j<=l)
   {
   b[k++]=arr[j++];
   }
for(i=f,k=0;i<=l;)
{
arr[i++]=b[k++];
}

}
   void Merge(int arr[],int f,int l)
  {
   int mid;
   if(f<l)
{
  mid =(f+l)/2;
  Merge(arr,f,mid);
  Merge(arr,mid+1,l);
  MergeSort(arr,f,mid+1,l);
 }
}
  int main()
  {
  int arr[100],n;
  printf("Enter the number of elements: "); scanf("%d",&n);
  printf("Enter the elements: ");
  for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
  Merge(arr,0,n-1);
  printf("The sorted elements are: \n");
  for(int i=0;i<n;i++)
  {
  printf(" %d",arr[i]);
  }
 return 0;
}

