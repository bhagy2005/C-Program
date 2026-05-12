//6.write a c program that declares the same variable twice in the same scope compile&observe the compiler message.
#include<stdio.h>
void main()
{
 int a;
 int a;
 printf("%d",a);

}
 //shows error because of 2 times declare the variable& data type. 
 //so compile tells already declare the variable &dt thats why error shows.
