/*
6.Define a constant TAX_RATE with a value of 0.08 using double datatype (for an 8% tax
rate) and use it to calculate the total cost of a purchase including tax. Prompt the user for
the purchase amount. --> totalCost = purchaseAmount + (purchaseAmount * TAX_RATE);*/
#include<stdio.h>
void main()
{
  const double TAX_RATE=0.08;
  double purchaseamount;
  printf("Enter a purchasement:");
  scanf("%lf",&purchaseamount);
  double total = purchaseamount + (purchaseamount * TAX_RATE);
  printf("TOTAL:%lf",total);
}
