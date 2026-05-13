//2.Write a C program that reads a character(char) from the user and displays its corresponding ASCII code.
#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    int result = a;
    printf("%d",result);
}
//output:Enter a character:B
//66


