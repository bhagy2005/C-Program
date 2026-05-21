/*2. Develop a program that checks if a person's temperature in Celsius is above 37 degrees. If
it is, print "Fever detected." Otherwise, print "Normal temperature." */
#include<stdio.h>
void main()
{
    int temp;
    printf("enter temperature:");
    scanf("%d",&temp);
    if(temp>37)
       printf("Fever detected");
    else
       printf("Normal temperature");

}
/*
enter temperature:68
Fever detected
*/
