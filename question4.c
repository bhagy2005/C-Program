/*4. Define a constant PI with a value of 3.14159 using double datatype and use it to calculate
the area of a circle by taking r=5.  -->area: pi * r * r*/
#include<stdio.h>
void main()
{
   const double pi=3.14159;
   int r=5;
   double area=  pi*r*r;
   printf("%lf",area);
}
