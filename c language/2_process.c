// write a program to findout simple interest of given amount,rate,year. 
// formula (amount * rate * year) / 100
#include<stdio.h>
void main()
{
    //create variable 
    int amount,year;
    float rate,interest;
    printf("Enter amount");
    scanf("%d",&amount);
    printf("Enter rate");
    scanf("%f",&rate);
    printf("Enter year");
    scanf("%d",&year);
    //process 
    interest = (amount * rate * year) / 100;
    printf("simple interest = %.2f",interest);

}