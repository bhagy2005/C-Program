/*4.Develop a program that calculates the quotient and remainder when dividing two integers provided by
the user using the division operator (/) and modulus operator (%). Display both the quotient and remainder.*/
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a first value: ");
    scanf("%d",&a);
    int b;
    printf("Enter a second value: ");
    scanf("%d",&b);
    int quotient = a/b;
    int remainder = a%b;
    printf("The quotient: %d\n",quotient);
    printf("The remainder: %d",remainder);
}

/*output: Enter a first value: 20
          Enter a second value: 5
          The quotient: 4
          The remainder: 0 */
