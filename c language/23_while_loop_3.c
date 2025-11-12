/* write a program to findout compound interest of given amount rate year  */
#include <stdio.h>
void main()
{
    int year,count=0;
    float amount, rate, interest,original_amount;

    printf("Enter amount: ");
    scanf("%f", &amount);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter rate: ");
    scanf("%f", &rate);
    original_amount = amount;
    // calculate 1st year compound interest
    while(count<year)
    {
        interest = (amount * rate * 1) / 100;
        amount = amount + interest; // 1000 + 100
        count++;
    }
    printf("compound interest = %.2f",amount - original_amount);
}