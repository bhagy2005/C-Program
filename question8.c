/*8. Define a constant SPEED_OF_LIGHT with a value of 299792458.0 m/s using double
datatype (the speed of light in a vacuum) and use it to calculate the distance that light
travels in a specified number of seconds. Prompt the user for the time in seconds. -->distance = SPEED_OF_LIGHT * timeInSeconds;*/
#include<stdio.h>
void main()
{
 const double SPEED_OF_LIGHT=299792458.0;
  double timeInSeconds;
  printf("Enter a timeInSeconds:");
  scanf("%lf",&timeInSeconds);
  double distance = SPEED_OF_LIGHT * timeInSeconds;
  printf("DISTANCE:%lf",distance);
}

