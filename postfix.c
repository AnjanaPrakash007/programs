#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include"stackex.c"
int main()
{
  char postfix[100],e;
  int i=0,a,b,r;
  printf("enter the expression");
  fgets(postfix,100,stdin);
  for(i=0;i<strlen(postfix)-1;i++)
  {
    e=postfix[i];
    if(isdigit(e))
    {
      push(e-'0');
    }
    else
    {
      a=pop();
      b=pop();
      switch(e)
      {
        case '+':
        r=a+b;
        break;
        case '-':
        r=b-a;
        break;
        case '/':
        r=b/a;
        break;
        case '^':
        r=pow(b,a);
        break;
      }
      push(r);
    }
  }
  printf("result is %d",r);
}
