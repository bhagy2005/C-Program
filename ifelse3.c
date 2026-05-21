/*3. Develop a program that checks if a person's age is exactly 50. If it is, print "You're 50 years
old." Otherwise, print "Your age is not 50." */
#include<stdio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age==50)
       printf("You're 50 years old");
    else
       printf("Your age is not 50");

}
/*enter age:50
You're 50 years old

enter age:58
Your age is not 50

*/
