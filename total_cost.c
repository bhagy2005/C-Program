/*6.Develop a program that calculates the total cost of a meal at a restaurant, including tax and tip.
Prompt the user to enter the cost of the meal, the tax rate, and the tip percentage. Calculate the
final cost using arithmetic operators and display the total.
Hint: Total Cost = Cost of Meal + Tax Amount + Tip Amount
Tax Amount: Tax Amount = (Tax Rate / 100) * Cost of Meal
Tip Amount: Tip Amount = (Tip Percentage / 100) * Cost of Meal*/
#include<stdio.h>
void main()
{
    int meal;
    printf("Enter the cost of the meal: ");
    scanf("%d",&meal);
    int tax;
    printf("Enter the cost of the tax: ");
    scanf("%d",&tax);
    int tip;
    printf("Enter the cost of the tip: ");
    scanf("%d",&tip);
    int Tax_Amount = (tax * meal)/100;
    int Tip_Amount = (tip * meal)/100;
    int Total_Cost = meal + Tax_Amount + Tip_Amount;
    printf("Display the total cost: %d",Total_Cost);
}

/* Output:
Enter the cost of the meal: 15000
Enter the cost of the tax: 500
Enter the cost of the tip: 100
Display the total cost: 105000
*/