/* 2.Create a program that uses an `if` statement to determine whether a user-inputted
temperature is above freezing (greater than 0 degrees Celsius). If it is, display "No frost." */
#include<stdio.h>
void main()
{
    int temperature;
    printf("enter temperature:");
    scanf("%d",&temperature);
    if(temperature>0)
       printf("No frost");
}
/*enter temperature:100
No frost*/
