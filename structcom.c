//Write a program to add two complex numbers using structure
#include<stdio.h>
struct complex
{
  int r;
  int i;
};
int main()
{
  struct complex a,b,sum;
  printf("Enter the real and imaginary part of the number-1 (a+ib):\n");
  scanf("%d%d",&a.r,&a.i);
  printf("Enter the real and imaginary part of the number-2 (c+id):\n");
  scanf("%d%d",&b.r,&b.i);
  sum.r= a.r+b.r;
  sum.i= a.i+b.i;
  printf("The sum of complex numbers are:%d + %d.i",sum.r,sum.i);

}
