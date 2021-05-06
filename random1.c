#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int lower=1,upper=20,count=20;

  srand(time(0));

  printf("random numbers are :");

  for(int i=0;i<count;i++)

  {
    int number=(rand()%(upper-lower+1))+lower;
    printf("%d\t",number);
  }
}
