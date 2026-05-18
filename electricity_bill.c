/*9. Write a C program that asks the user to enter the number of electricity units consumed and
the cost per unit, calculates the total electricity bill using arithmetic operators, and displays
the final bill amount with an appropriate message.
Total Bill = Units � Cost per Unit*/
#include<stdio.h>
void main()
{
    int Units;
    printf("Enter the no.of electricity units consumed: ");
    scanf("%d",&Units);
    int cost_per_unit;
    printf("Enter the cost per units: ");
    scanf("%d",&cost_per_unit);
    int total_bill = Units * cost_per_unit;
    printf("Displays the final bill amount: %d",total_bill);
}

/*output:
Enter the no.of electricity units consumed: 150
Enter the cost per units: 10
Displays the final bill amount: 1500
*/
