/* write a program to accept purcharse price and sale price from user and findout loss or profit amount, display with profit/loss amount
difference = sale_price - purchase_price
if difference is positive then it profit
if difference is negative then it loss
*/
#include<stdio.h>
void main()
{
    int sale_price, purchase_price, differnce;
    printf("Enter purchase price");
    scanf("%d", &purchase_price);

    printf("Enter sales price");
    scanf("%d", &sale_price);

    // calculate difference
    differnce = sale_price - purchase_price;

    if (differnce < 0) // < <= >= > == !=
    {
        printf("loss = %d", differnce);
    }

    if (differnce > 0) // < <= >= > == !=
    {
        printf("profit = %d", differnce);
    }
}