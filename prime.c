// program to check whether the given number is prime or not

#include<stdio.h>
int main()
{
    int n,i,count=0;
    // asking input from the user
    printf("enter the number: ");
    //storing input number into a variable
    scanf("%d",&n);
    //iterate from 1 to n
    for(i=1;i<=n;i++)
    //if n is divisible by i,i is a factor of n, increases the count value= no of factors
    {
      if(n%i==0)
      {
        count++;
      }
    }
    //prime number has 2 factors that is the number itself and one
    if(count==2)
    printf("the given number is a prime number\n");
    else
    printf("the given number is not a prime number");
}
