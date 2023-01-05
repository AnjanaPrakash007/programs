#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top=NULL;
void push(int n)
{
  struct node *new;
  new=(struct node*)malloc(sizeof(struct node));
  if(new==NULL)
  {
    printf("stack underflow");
    exit(1);//jump statement
  }
  else
  {
      //push at top
      new->data=n;
      new->next=top;
      top=new;
  }
  printf("\nnode inserted");
}
  int pop()
  {
    int d;
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
      printf("\nstack empty");
      exit(1);
    }
    else
    {
      d=temp->data;
      top=top->next;
      free(temp);
      return d;
    }
  }
  void display()
  {
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
      printf("\nstack empty");
      exit(1);
    }
    else
    {
      printf("\nthe stack is: ");
      while(temp!=NULL)
      {
        printf("%d\t",temp->data);
        temp=temp->next;
      }
    }

  }
