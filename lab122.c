#include<stdio.h>
  int stack[100],choice,n,top,i,x;
  void push(void);
  void pop(void);
  void display(void);
  int main()
  {
    top=-1;
    printf("\nenter the size of the stack max=100:");
    scanf("%d",&n);
    printf("\nstack operations\n");
    printf("----------------");
    printf("\n\n1.push\n\n2.pop\n\n3.display\n\n4.exit\n");
    do
    {
      printf("\nenter your choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
        {
          push();
          break;
        }
        case 2:
        {
          pop();
          break;
        }
        case 3:
        {
          display();
          break;
        }
        case 4:
        {
          printf("exit");
          break;
        }
        default:
        {
          printf("please enter a valid choice 1/2/3/4");
        }
      }
    }
    while(choice!=4);
    return 0;
  }
  void push()
  {
    if(top>=n-1)
    {
      printf("stack overflow");
    }
    else
    {
      printf("enter the value to be pushed:");
      scanf("%d",&x);
      top++;
      stack[top]=x;
    }
  }
  void pop()
  {
    if(top<=-1)
    {
      printf("stack underflow");
    }
    else
    {
      printf("popped elements are %d\n",stack[top]);
      top--;
    }
  }
  void display()
  {
    if(top>=0)
    {
      printf("the elements in the stack is ");
      for(i=top;i>=0;i--)
      {
        printf("%d\n",stack[i]);
      }
      printf("\nnext choice ");
    }
    else
    {
      printf("stack is empty");
    }
  }
