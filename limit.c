#include<stdio.h>
void main()
{
  int n1,n2,n;
  printf("enter the limits");
  scanf("%d,%d",&n1,&n2);
  n=n1;
  while(n< n2)
  {
    printf("%d",n);
    n=(n+1);
  }
}
