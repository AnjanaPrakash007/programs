#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x)
{
  struct node *new;
  new=(struct node *)malloc(sizeof(struct node));
  new->data=x;
  new->next=NULL;
  if(rear==NULL)
  {
    front=rear=new;
    rear->next=front;
  }
  else
  {
    rear->next=new;
    rear=new;
    rear->next=front;
  }
}
int dequeue()
{
    struct node *temp;
    int d;
    temp=front;
    if(rear==NULL)
    {
      printf("queue is empty");
    }
    else if(front==rear)
    {
      front=rear=NULL;
    }
}
