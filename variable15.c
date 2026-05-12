/*15. Write a C program to declare and initialize the variables in the below format and print
the variables.
Input: int a=b=c; a=b=c=5;  Output?*/
#include<stdio.h>
void main()
{
   int a=b=c; a=b=c=5;
   printf("a:%d\nb:%d\nc:%d",a,b,c);
}
// shows error because of 2 times declare the variable& data type. 
//so compile tells already declare the variable &dt that's why error shows.
