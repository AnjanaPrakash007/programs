#include<stdio.h>
void main()
{
  int int_type;
  float float_type;
  double double_type;
  char char_type;
  printf("size of int=%lu bytes\n",sizeof(int_type));
  printf("size of float=%lu bytes\n",sizeof(float_type));
  printf("size of double=%lu bytes\n",sizeof(double_type));
  printf("size of char=%lu bytes\n",sizeof(char_type));
}
