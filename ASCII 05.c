//5.Write a program that calculates and displays the ASCII code difference between two characters entered by the user.
#include<stdio.h>
void main()
{
    char char_1,char_2;
    printf("Enter the first character:");//B
    scanf("%c" , &char_1);//characters consisting also tab space.
    printf("First character is: %d\n", char_1);//66
    printf("Enter the second character:");//M
    scanf(" %c" , &char_2);
    printf("Second character is: %d\n", char_2);//77
    int difference = char_1 - char_2;//66 - 77
    printf("Difference between 2 characters: %d",difference);//-11
}

//output: Enter the first character:B
//First character is: 66
//Enter the second character:M
//Second character is: 77   
//Difference between 2 characters: -11
