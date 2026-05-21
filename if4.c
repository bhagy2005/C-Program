/*4.Develop a program that uses an `if` statement to assess if a user-provided number is
negative. If it is, display "Negative number." */
#include<stdio.h>
void main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num<0)
       printf("negative number");
}
/*enter number:-5
negative number*/
