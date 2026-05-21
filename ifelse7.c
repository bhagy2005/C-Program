/*7.Develop a C program that reads a character and checks if it's a special character (not a
letter or digit) using ASCII codes. Display a message accordingly. */
#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);


    if(!((ch>=65 && ch<=90) || (ch >=97 && ch<=122) || (ch >=48 && ch <=57)))
       printf("it is special character");
    else
        printf("it is not special character ");
}
/*enter character:!
it is special character




*/
