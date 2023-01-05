//checking alphabets using conditional operator
#include<stdio.h>
int main()
{
  char ch;
  printf("enter the alphabet");
  scanf("%c",&ch);
  (ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')
  ?printf("it is an alphabet")
  :printf("It is not an alphabet");

}
