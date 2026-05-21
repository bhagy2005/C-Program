/*
5. Design a program that employs an `if` statement to verify if a customer's purchase
amount is greater than Rs.50. If it is, print "Eligible for discount." */
#include<stdio.h>
void main()
{
    int PurchaseAmount;
    printf("enter amount:");
    scanf("%d",&PurchaseAmount);
    if(PurchaseAmount>50)
       printf("Eligible for discount");

}
/*enter amount:100
Eligible for discount*/
