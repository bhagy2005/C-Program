//4.Create a C program that takes a user-entered ASCII code and prints the corresponding character.
#include<stdio.h>
void main()
{
    int cha;
    printf("Enter a ASCII code:");
    scanf("%d",&cha);
    char result = cha;
    printf("The character is: %c",result);
}

//output: Enter a ASCII code: 66
//The character is: B