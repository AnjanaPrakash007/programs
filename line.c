//to check if points are collinear or not
#include<stdio.h>
int main()
{
  float x1,y1,x2,y2,x3,y3,s1,s2;
  //3 points that is 2 lines s1 and s2 are the slops collinear if slops are equal
  printf("enter the points(x1,y1)\n");
  scanf("%f%f",&x1,&y1);

  printf("enter the points(x2,y2)\n");
  scanf("%f%f",&x2,&y2);

  printf("enter the points(x3,y3)\n");
  scanf("%f%f",&x3,&y3);

  s1=(y2-y1)/(x2-x1);
  s2=(y3-y2)/(x3-x2);

  if(s1=s2)
  {
    printf("points are collinear :\n");
  }
  else
  {
    printf("points are not collinear:\n");
  }

}
