#include<stdio.h>
int main()
{
  int a,b,flag,i,n;
  printf("enter the limits");
  scanf("%d%d",&a,&b);
  for(n=a;n<=b;n++)
  {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0&&n>=2)
    {
      printf("%d\t",n);
    }
  }
}
