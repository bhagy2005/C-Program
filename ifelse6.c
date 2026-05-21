/*6. Create a program that takes a character as input and checks if it's a digit (0-9) or not using
ASCII values. Display the result. */
#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);


    if(ch<=9)
       printf("it is digit");
    else
        printf("it is not digit");
}
