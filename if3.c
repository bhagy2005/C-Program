/*3. Write a program that utilizes an `if` statement to check if a student's exam score is equal
to or higher than 60. If the condition holds, print "Passed." */
#include<stdio.h>
void main()
{
    int score;
    printf("enter student's score:");
    scanf("%d",&score);
    if(score>=60)
       printf("passed");
}
/*enter student's score:65
passed*/
