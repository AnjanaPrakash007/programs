//finding gcd of 2 addnos
#include<stdio.h>
int main()
{
  int a,b,i=1;
  printf("enter the two digits\n");
  scanf("%d%d",&a,&b);
  for(i=1;i<=a && i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      printf("gcd of the number is %d\n",i);
    }
  }

}
