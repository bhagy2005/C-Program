/*
5.Define a constant PI with a value of 3.14159 using double datatype and use it to calculate
the area of a circle. Prompt the user for the radius. After calculating the area, round to two
decimal places.(%.2f). -->area: pi * r * r*/
#include<stdio.h>
void main()
{
  const double pi=3.14159;
  double r;
  printf("Enter a radius:");
  scanf("%lf",&r);
  float area = pi*r*r;
  printf("area of circle is:%.3f",area);
}
