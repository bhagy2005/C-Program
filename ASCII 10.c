//10. Write a C program to convert a given ASCII number (entered by user) into its character and print both.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a ASCII value: ");
    scanf("%d",&a);
    char result = a;
    printf("Display the character: %c",result);
}

//output: Enter a ASCII value: 66
//Display the character: B