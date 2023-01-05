//merge sorting
#include<stdio.h>
#include<stdlib.h>
void mergesort(int *a,int l ,int u);
void merge(int *a,int l,int mid,int u);
int c=0,n;
int main()
{
  int *a,i,j;
  printf("enter how many nums:");
  scanf("%d",&n);
  printf("enter the numbers:");
  a=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  mergesort(a,0,n-1);
  printf("*********sorteed array*****");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  printf("comparison:%d",c);
}
void mergesort(int *a,int l,int u)
{
  int mid;
  if(l<u)
  {
    mid=(l+u)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,u);
    merge(a,l,mid,u);
  }
}
void merge(int *a,int l,int mid,int u)
{
  int *b,i,j,k;
  b=(int*)malloc(n*(sizeof(int)));
  i=l;
  j=mid+1;
  k=l;
  while(j<=u && i<=mid)
  {
    c++;
    if(a[i]<=a[j])
    {
      b[k]=a[i];
      i++;
    }
    else
    {
      b[k]=a[j];
      j++;
    }
    k++;
  }
  while(j<=u)
  {
    b[k]=a[j];
    j++;
    k++;
  }
  while(i<=mid)
  {
    b[k]=a[i];
    i++;
    k++;
  }
  for(k=l;k<=u;k++)
  {
    a[k]=b[k];
  }

}
