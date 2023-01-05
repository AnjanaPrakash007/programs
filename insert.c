//insertion sorted
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,n,i,j,temp,c=0;
  printf("enter the number of elements:");
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  for(i=0;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp)
    {
      a[j+1]=a[j];
      j--;
    }
    c++;
    a[j+1]=temp;
  }
  printf("numbers after sorting:");
  for(i=0;i<n;i++)
  {
    printf("%d\t",*(a+i));
  }
  printf("number of comparisons is %d:",c);
}
