/*1.Write a program that uses an `if` statement to check if a user-entered integer is less than
100. If the condition is met, print "Approved."  */
#include<stdio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a<=100)
       printf("Approved");
}
