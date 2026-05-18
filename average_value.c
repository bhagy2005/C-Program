/*8.Write a program that accepts two item s weight and number of purchases and calculate
the average value of the items.
Input :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Output:
Average Value = 19.444444. */
#include<stdio.h>
void main()
{
 float w1=15;
 float w2=25;
 float p1=5;
 float p2=4;
 float r=(w1*p1+w2*p2)/(p1+p2);
 printf("%f",r);
}

// Output: 19.444445