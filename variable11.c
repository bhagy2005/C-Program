/*11. Write a C program to declare and initialize the variables in the below format and print
the variables.
     Input: int a, int b, int c;
          a = 10;
          b = 10;
          c = 10; */
#include<stdio.h>
void main()
{
   int a, int b, int c;
   a = 10;
   b = 10;
   c = 10;
   printf("a:%d\nb:%d\nc:%d",a,b,c);
}
// shows error because of 2 times declare the variable& data type. 
//so compile tells already declare the variable &dt that's why error shows.