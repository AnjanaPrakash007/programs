#include<stdio.h>
#include<stdlib.h>
//adjacency
int g[10][10],n;
struct node
{
  int data;
  struct node *next;
};
struct node *front =NULL;
struct node *rear  =NULL;
int dfs_visited[10];
void enqueue(int x)
{
  struct node *new;
  new=(struct node*)malloc(n*sizeof(int));
  new->data=x;
  new->next=NULL;
  //if no items in queue
  if(front=NULL)
  {
    front=rear=new;
  }
  else
  {
    rear->next=new;
    rear=new;
  }
}
int dequeue()
{
  struct node *temp;
  int d;
  temp=front;
  d=temp->data;
  front=front->next;
  free(temp);
  return d;
}
void bfs ()
{
  int i=q,j,visited[10],node;
  for(j=0;j<n;j++)
  {
    visited[j]=0;
  }
}
