#include<stdio.h>
#include"llds.c"
int main()
{
  int choice,a;
  do
  {
    printf("LINKED LIST OPERATIONS");
    printf("\n1.insertion at front");
    printf("\n2.deletion from front");
    printf("\n3.search");
    printf("\n4.traverse");
    printf("\n5.exit");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
              printf("enetr the num to be inserted");
              scanf("%d",&a);
              insertatfront(a);
              break;
      case 2:
              printf("deletion");
              deletefromfront();
              break;
      case 3:
              printf("enter the element to be searched");
              scanf("%d",&k);
              if(search(k)==1)
              {
                printf("%d is found in list",k);
              }
              else
              {
                printf("%d is not found in the list",k);
              }
              break;
      case 4:
              printf("traversal");
              traverse();
              break;
      case 5:
              printf("thank you");
              break;
      default:
              printf("invalid choice");
    }
  }while(choice!=5);
}
