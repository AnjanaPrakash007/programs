#include<stdio.h>
int main()
{
  int n,a[50],i;
  printf("enter number less than 50");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
  }
  else
  {
    printf("enter a number greater than 50");
  }
  printf("\n");
}
