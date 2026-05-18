/*5. Write a program that converts a temperature in Fahrenheit to Celsius using the appropriate formula.
Prompt the user to enter the temperature in Fahrenheit, perform the conversion using arithmetic operators,
and display the temperature in Celsius. Hint: double celsius = (fahrenheit - 32) * 5.0/9.0;*/
#include<stdio.h>
void main()
{
    int fahrenheit;
    printf("Enter a temperature in Fahrenheit:");
    scanf("%d",&fahrenheit);
    double celsius = (fahrenheit - 32) * 5.0/9.0;
    printf("Display the temperature in Celsius: %lf",celsius);
}

/* Output:
Enter a temperature in Fahrenheit:50
Display the temperature in Celsius: 10.000000
*/