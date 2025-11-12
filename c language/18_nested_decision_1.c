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

    printf("num1 = %d, num2 = %d num3 = %d\n", num1, num2, num3); // num1 = 50, num2 = 75, num3 =100
    if (num1 > num2)                                            // outer if decision making
    {
        // num1 is bigger then num2
        if (num1 > num3) // inner if decision making
        {
            // num1 is biggest number
            printf("num1 is biggest number");
        }
        else
        {
            // num3 is biggest number
            printf("num3 is biggest number");
        }
    }
    else
    {
        // num2 is bigger then num1
        if (num2 > num3)
        {
            printf("num2 is biggest number");
        }
        else
        {
            printf("num3 is biggest number");
        }
    }
}