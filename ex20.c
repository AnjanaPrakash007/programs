#include<stdio.h>
void find_transpose(int a[10][10],int ,int);
int main()
{
  int a[10][10];
  int m,n,i,j;
  printf("enter the order of the matrix:");
  scanf("%d%d",&m,&n);
  printf("enter the matrix");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  find_transpose(a,m,n);
}
void find_transpose(int a[10][10],int m,int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("%d\t",a[j][i]);
    }
    printf("\n");
  }
}
