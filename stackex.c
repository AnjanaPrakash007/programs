#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top=NULL;
void push(int x)
{
  struct node *new;
  new=(struct node *)malloc(sizeof(struct node));
  new->data=x;
  new->next=top;
  top=new;
}
int pop()
{
  struct node *temp;
  int d;
  temp=top;
  d=temp->data;
  top=top->next;
  free(temp);
  return d;
}
