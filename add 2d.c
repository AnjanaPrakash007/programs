#include<stdio.h>
int main()
{
  //2d array declaration
  int a[10][10],m,n,i,j;
  //entering order
  printf("enter the order of 2 matrices");
  scanf("%d%d",&m,&n);
  //checking array limit in the given order
  if(m<=10 && n<=10)
  {
    printf("enter the matrix 1:\n");
    //storing the array elements of first
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    //displaying the array elements
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
      printf("\n");
    }
    printf("enter the matrix 2:\n");
    //storing the array elements of second
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    //displaying the array elements
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
      printf("\n");
    }
    3[i][j]=1[i][j]+2[i][j]
    printf("enter the matrix 3:")
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
      printf("\n");

  }
  else
  {
  printf("enter a number less than or equal to :10X10");
  }

}
