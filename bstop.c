//binary search tree
#include<stdio.h>
#include<stdlib.h>
//succesor node
struct node* getsuccesor(struct node *p)
struct node
{
  int data;
  struct node *left,*right;
};
struct node *root=NULL;
void insert(int k)
{
  int flag=0;
  struct node *ptr,*pre,*new;
  ptr=root;
  while(ptr!=NULL && flag==0)
  {
    if(k< ptr->data)
    {
      pre=ptr;
      ptr=ptr->left;
    }
    else if(k> ptr->data)
    {
      pre=ptr;
      ptr=ptr->right;
    }
    else
    {
      flag=1;
      printf("key exists");
      return;
    }

  }
  if(ptr==NULL)
  {
    new= (struct node*)malloc(sizeof(struct node));
    new->data=k;
    new->left=new->right=NULL;
    if(root==NULL)
    {
      root=new;
      return;
    }
    if(pre->data <k)
    {
      pre->right=new;
    }
    else
    {
      pre->left=new;
    }
  }
}
void inorder(struct node *root)
{
  if(root==NULL
  {
    return;
  }
  inorder(root->left);
  printf("%d",root->data);
  inorder(root->right);
}
