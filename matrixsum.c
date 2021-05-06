#include<stdio.h>
int main()
{
 //2d array declaration
  int m,n,i,j,s[10][10],a[10][10],b[10][10];



  //entering order
  printf("enter the order of 2 matrices :\n");
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
        scanf("%d",&b[i][j]);
      }
    }
    //assigning position and adding
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        s[i][j]=a[i][j]+b[i][j];
      }
    }
    //display the sum
    printf("sum of 2 matrices :");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",s[i][j]);
      }
      printf("\n");
    }

  }
  else
  {
  printf("enter a number less than or equal to :10X10");
  }
}
