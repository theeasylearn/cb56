/*
    write a program to findout & display net profit, tax amount, gross profit from given monthly income based upon following rule
    slab                        Rate
    ------------------------------------
    ₹0 to ₹4 lakh:              Nil
    ₹4 lakh to ₹8 lakh:         5%
    ₹8 lakh to ₹12 lakh:        10%
    ₹12 lakh to ₹16 lakh:       15%
    ₹16 lakh to ₹20 lakh:       20%
    ₹20 lakh to ₹24 lakh:       25%
    Above ₹24 lakh:             30%

*/
#include<stdio.h>
void main()
{
    int monthly_income, yearly_income;
    float tax, net_income;

    printf("Monthly income");
    scanf("%d", &monthly_income);

    yearly_income = monthly_income * 12;
    if (yearly_income > 2400000)
    {
        tax = yearly_income * 0.30;
    }
    else if (yearly_income > 2000000)
    {
        tax = yearly_income * 0.25;
    }
    else if (yearly_income > 1600000)
    {
        tax = yearly_income * 0.20;
    }
    else if (yearly_income > 1200000)
    {
        tax = yearly_income * 0.15;
    }
    else if (yearly_income > 800000)
    {
        tax = yearly_income * 0.10;
    }
    else if (yearly_income > 400000)
    {
        tax = yearly_income * 0.05;
    }
    else
    {
        tax = 0;
    }
    // calculate net income
    net_income = yearly_income - tax;
    printf("Gross income %d tax = %.2f net income = %.2f", yearly_income, tax, net_income);
    
}