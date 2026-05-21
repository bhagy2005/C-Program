/*8. Write a program that uses an ‘if’ statement to check if a user-entered number is greater
than 1000. If the condition is true, print "Large number." */
#include<stdio.h>
void main()
{
    int num;
    printf("enter value:");
    scanf("%d",&num);
    if(num>1000)
       printf("large number");

}
/*enter value:1001
large number*/
