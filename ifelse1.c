/*1. Write a program that evaluates if a user's age is less than 18. If it is, print "Underage."
Otherwise, print "Adult."  */
#include<stdio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age<18)
       printf("underage");
    else
       printf("adult");

}
/*
enter age:17
underage

enter age:19
adult
*/
