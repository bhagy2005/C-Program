/*7.Write a program to calculate profit or loss on a transaction.
Input: buy for 500, sell for 700
Output: your profit amount: 200*/
#include<stdio.h>
void main()
{
    int CP = 500;
    int SP = 700;
    int amount = (SP - CP);
    printf("Your profit amount: %d",amount);
}

//output: Your profit amount: 200
