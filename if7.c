/*6. Write a program using an ‘if’ statement that evaluates if a person's BMI (Body Mass
Index) is above 25. If it is, print "You are overweight." */
#include<stdio.h>
void main()
{
    int BMI;
    printf("enter value:");
    scanf("%d",&BMI);
    if(BMI>25)
       printf("You are overweight");

}
/*enter value:30
You are overweight*/
