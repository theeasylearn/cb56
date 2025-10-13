/* write a program to make sum of all the given value until user give zero */
#include<stdio.h>
void main()
{
    int value=0;
    int sum = 0;
    do
    {
        printf("enter value to do sum(0 to exit)");
        scanf("%d",&value);
        sum = sum + value;
    }while(value!=0);
    printf("sum = %d",sum);
}