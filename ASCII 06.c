//6.Write a C program to add two characters using their ASCII values and display the result.
#include<stdio.h>
void main()
{
    char char_1 ='B';
    int code1 = char_1;
    printf("The first character is: %d\n",char_1);
    char char_2 ='D';
    int code2 = char_2;
    printf("The second character is: %d\n",char_2);
    int add = code1 + code2;
    printf("The addition of two characters: %d",add);
}

/*output: The first character is: 66
        The second character is: 68   
        The addition of two characters: 134
