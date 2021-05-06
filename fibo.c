//first n numbers of a fibonacci sequence
#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,nextterm,i;
    //number of fibonacci terms
    printf("enter the number of terms: ");
    scanf("%d",&n);

    printf("fibonacci series:");
    //entering numbers less than n
    for(i=1;i<=n;++i)
    {
    //printing numbers following the fibonacci number rule
        printf("%d",t1);
        //next term is sum of penultimate 2 numbers
        nextterm =t1+t2;
        //t2 value is stored in t1
        t1=t2;
        //value of next term is stored in t2
        t2=nextterm;
    }

}
