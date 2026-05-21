/*5. Write a C program that asks the user to enter a character and determines if it's a
lowercase letter(a-z) using ASCII codes. Display a message indicating whether it's a
lowercase letter or not. */
#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    printf("%d",ch);

    if(ch==97)
       printf("lower case");
    else
        printf("not lowercase");
}
/*enter character:a
97
lower case

enter character:A
65
not lowercase



*/
