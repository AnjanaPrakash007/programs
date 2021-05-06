#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int count=0,n,i,a[20],found=0;
  srand(time(0));
  while(count<20)
  {
    n=rand()%20+1;
    for(i=0;i<count;i++)
    {
      if(a[i] ==n)
      found=1;
      break;
    }
    if(found==0)
    {
      a[count]=n;
      printf("%d\n",a[count]);
      count++;
    }

  }
}
