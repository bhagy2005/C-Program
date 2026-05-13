//4.Create a C program that takes a user-entered ASCII code and prints the corresponding character.
#include<stdio.h>
void main()
{
    int value_1;
    printf("Enter a ASCII code: ");
    scanf("%d",&value_1);
    char char_1 = value_1;
    printf("The character is: %c",char_1);
}


//output: Enter a ASCII code: 66
//The character is: B

