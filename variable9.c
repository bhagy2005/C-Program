//9.write a c program to declare the a variable ,print it,assign a value to it,&print it again to observe differnce b/w declaration and assignment.
#include<stdio.h>
void main()
{
   int c;
   printf("%d\n",c);
   int a =25;
   printf("a:%d",a);
}
// output is 0 because not give value .so to get  garbage value. a:25 because assign value to variable so it shows value.
