#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void insert();
void delete();
void display();
int queue_array[SIZE];
int rear=-1;
int front=-1;
int main()
{
  int choice;
  while(1)
  {
    printf("\n-----------------------------\n");
    printf("1.insert element into queue\n");
    printf("2.delete elements from the queue\n");
    printf("3.display the queue\n");
    printf("4.quit");
    printf("\n----------------------------\n");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      insert();
      break;
      case 2:
      delete();
      case 3:
      display();
      case 4:
      exit(1);
      default:
      printf("\nWrong choice");
    }
  }
}
void insert()
{
  int add_item;
  if(rear==SIZE-1)
  printf("\nqueue overflow");
  else
  {
    if(front==-1)
    front=0;
    printf("the elements to queue:");
    scanf("%d",&add_item);
    rear=rear+1;
    queue_array[rear]=add_item;
  }
}
void delete()
{
  if(front==-1||front>rear)
  {
    printf("\nqueue underflow");
  }
  else
  {
    printf("element deleted from queue is: %d",queue_array[front]);
    front=front+1;
  }
}
void display()
{
  int i;
  if(front==-1)
  printf("\nqueue is empty");
  else
  {
    printf("the queue elements are :");
    for(i=front;i<=rear;i++)
    {
      printf("%d\t",queue_array[i]);
    }
    printf("\n");
  }
}
