//binary searched
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,*a,l,u,mid,k,c=0,i;
  printf("enter how many numbers:");
  scanf("%d",&n);
  printf("enter %d nums in ascending order:",n);
  a=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  printf("enter the key to search:");
  scanf("%d",&k);
  l=0;
  u=n-1;
  while(l<=u)
  {
    mid=(l+u)/2;
    c++;
    if(k==a[mid])
    {
      printf("%d found at location %d\n",k,mid+1);
      printf("num of comparison=%d\n",c);
      break;
    }
    else if(k<a[mid])
    {
      u=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
  if(l>u)
  {
    printf("key not found in the array");
    printf("num of comparison=%d",c);
  }

}
