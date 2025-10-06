/*
    write a program to findout largest number from 3 given number

*/
#include <stdio.h>
void main()
{
    // variable declaration
    int num1, num2, num3;
    printf("Enter value for num1 ");
    scanf("%d", &num1);

    printf("Enter value for num2 ");
    scanf("%d", &num2);

    printf("Enter value for num3 ");
    scanf("%d", &num3);
    
    printf("num1 = %d, num2 = %d num3 = %d\n", num1, num2, num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("num1 is biggest number");
    }
    else if (num2 > num1 && num2 > num3)
    {

        printf("num2 is biggest number");
    }
    else
    {
        printf("num3 is biggest number");
    }
}