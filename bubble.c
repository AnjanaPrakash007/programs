#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,i,j,c=0,temp,n;
  printf("enter the num of elemnts:");
  scanf("%d",&n);
  printf("enter the elements:");
  a=(int*)malloc(n*(sizeof(int)));
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      c++;
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("sorted array");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("comparison=%d",c);
}
