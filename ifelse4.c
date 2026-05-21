/*4.Write a program that checks if the user entered character is ‘y’ if it is, print “yes”
otherwise print “no”. */
#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    char a='y';
    if(ch==a)
       printf("yes");
    else
        printf("No");
}
/*enter character:y
yes

enter character:a
No

*/
