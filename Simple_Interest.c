/*10. Write a C program that asks the user to enter the principal amount, rate of interest, and time in years,
 calculates the simple interest and total amount using arithmetic operators, and displays both values clearly.
 Simple Interest = (Principal � Rate � Time) / 100
 Total Amount = Principal + Simple Interest*/
#include<stdio.h>
void main()
{
    int principal;
    printf("Enter the principal amount: ");
    scanf("%d",&principal);
    int rate;
    printf("Enter the rate of interest: ");
    scanf("%d",&rate);
    int time;
    printf("Enter the time in years: ");
    scanf("%d",&time);
    int simple_Interest = (principal * rate * time) / 100;
    int total_amount = principal + simple_Interest;
    printf("The total amount: %d",total_amount);
}


/*output:
Enter the principal amount: 100000
Enter the rate of interest: 10
Enter the time in years: 5
The total amount: 150000
 */