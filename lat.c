#include<stdio.h>
#include<math.h>
void main()
{
  float l1,g1,l2,g2,l1rad,g1rad,l2rad,g2rad,d;
  printf("enter the longitude and latitude of firstplace");
  scanf("%f%f",&l1,&g1);
  printf("enter the longitude and lattitude of second place");
  scanf("%f%f",&l2,&g2);
  l1rad=l1*(3.14/180);
  l2rad=l2*(3.14/180);
  g1rad=g1*(3.14/180);
  g2rad=g2*(3.14/180);
  d=3963*acos((sin(l1rad)*sin(l2rad))+(cos(l1rad)*cos(l2rad*cos(g2rad-g1rad))));
  printf("distance in nautical miles is %f\n",d);
}
