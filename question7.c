/*
7. Create a C program that defines a constant GRAVITY with a value of 9.81 m/s² using
double datatype (standard gravity on Earth) and calculates the distance an object falls due
to gravity in a given time. Prompt the user for the time in seconds.  -->distance = 0.5 * GRAVITY * timeInSeconds * timeInSeconds;*/
#include<stdio.h>
void main()
{
  const double gravity=9.81;
  double timeInSeconds;
  printf("Enter a timeInSeconds:");
  scanf("%lf",&timeInSeconds);
  double distance = 0.5 * gravity * timeInSeconds * timeInSeconds;
  printf("DISTANCE:%lf",distance);
}
