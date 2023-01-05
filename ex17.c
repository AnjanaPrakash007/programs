#include<stdio.h>
int main()
{
  int n=1;
  printf("CALCULATOR");
  int a,b,r;
  char op;
  printf("IF YOU WANT TO STOP ENTER ZERO(0)");
  while(0<n)
  {
    printf("enter the 2 num");
    scanf("%d%d",&a,&b);
    getchar();
    printf("enter the opertaion");
    op=getchar();
    switch(op)
    {
      case'+':
      r=a+b;
      printf("%d+%d=%d",a,b,r);
      break;
      case'-':
      r=a-b;
      printf("%d-%d=%d",a,b,r);
      break;
    }
  }

}
