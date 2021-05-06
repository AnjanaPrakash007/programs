#include<stdio.h>
int main()
{
 //2d array declaration
  int a[10][10];
  int i,j,m,n,d;


  //entering order
  printf("enter the order of 2 matrices :");
  scanf("%d%d",&m,&n);
  //checking array limit in the given order
  if(m<=10 && n<=10)
  //enter the first matrix,storing the value
  {
    printf("enter the first matrix :");

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    //entering second matrix,storing the value
    printf("enter the second matrix :");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    //assigning position and subtract
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        d=a[i][j]-a[i][j];
      }
    }
    //display the sum
    printf("diffrence of 2 matrices :");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",s);
      }
      printf("\n");
    }

  }
  else
  {
  printf("enter a number less than or equal to :10X10");
  }
}
