// write a program to swap value of two variable without using third variable  
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    
    printf("Enter value for A");
    scanf("%d",&a); //10
    printf("Enter value for A");
    scanf("%d",&b); //20

    printf("\n before swaping a = %d b = %d",a,b);
    //swaping 
    b = a + b; // b = 30 a = 10
    a = b - a; // a = 20
    b = b - a; // b = 10
    printf("\n after swaping a = %d b = %d",a,b);
}