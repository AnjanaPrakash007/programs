//quicksort
#include<stdio.h>
#include<stdlib.h>
int c=0;
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void printArray(int *a,int n)
{
  int i;
  printf("the array");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
int partition(int *a,int l,int u)
{
  int pivot,start,end;
  pivot=a[l];
  start=l;
  end=u;
  while(start<end)
  {
    c++;
    while(a[start]<=pivot && start<u)
    {
      start++;
    }
    c++;
    while(a[end]>pivot && end>l)
    {
      end--;
    }
    if(start<end)
    {
      swap(&a[start],&a[end]);
    }
    swap(&a[l],&a[end]);
    return end;
  }
}
void quicksort(int *a,int l,int u)
{
  int loc;
  if(l<u)
  {
    loc=partition(a,l,u);
    quicksort(a,l,loc-1);
    quicksort(a,loc+1,u);
  }
}
int main()
{
  int *a,i,n;
  printf("how many numbers:");
  scanf("%d",&n);
  printf("enter the %d numbers",n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  printf("\n\nthe array before sorting");
  printArray(a,n);
  quicksort(a,0,n-1);
  printf("\n\nthe array after sorting:");
  printArray(a,n);
  printf("\nthe number of comparisons:%d",c);
}
