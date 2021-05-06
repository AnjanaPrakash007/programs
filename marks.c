#include<stdio.h>
void main()
{
    float p,m,c,t,per;
    printf("\nenter the marks\n");
    scanf("%f%f%f",&p,&m,&c);


    t= p+m+c;

    per= t/300*100;
    printf("%f",per);

    if(per<=40)
    {
     printf("\nfail\n");
    }
    else if(50<=per>=40)
    {
     printf("\nthird class\n");
    }
    else if(60<=per>=50)
    {
     printf("\nsecond class\n");
    }
    else if(50<=per>=60)
    {
     printf("\n first class \n");
    }
    else (per>=80);
    {
     printf("\n distinction\n");
    }

}
