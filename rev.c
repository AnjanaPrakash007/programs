// reverse a number//

#include<stdio.h>
void main()
{
    int num, rev=0;
    printf("enter a number");
    scanf("%d", &num);
    while(num!=0)
    {
      rev=(rev*10)+(num%10);
      num /=10;
    }
    printf("rev=%d",rev);






}
