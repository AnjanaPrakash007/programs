//stack operstions
#include<stdio.h>
#include"stackop.c"
int main()
{
  int choice ,value;
  printf("\n***STACK OPERATIONS***\n");
  while( choice != 4)
  {
      printf("\n1.push\n2.pop \n3.display\n4.exit");
      printf("\n enter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          printf("\n\nenter the number :");
          scanf("%d",&value);
          push(value);
          break;
          case 2:

          printf("\n\npopped item is %d",pop());
          break;
          case 3:
          display();
          break;
          case 4:
          exit(0);
          break;
          default:
          printf("invalid choice");
      }
  }
}
