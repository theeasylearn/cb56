/*
    write a program to accept body temprature from user as farenheit and display fever level(condition) as per below chart
    | Fahrenheit    | Condition                      |
    | ------------- | ------------------------------ |
    | < 95.0°       | Hypothermia                    |
    | 97.7° – 99.5° | Normal                         |
    | > 100.9°      | Hyperthermia (low-grade fever) |
    | > 106.7°      | Hyperpyrexia (high fever)      |



*/
#include <stdio.h>
void main()
{
    float farenheit;
    printf("Enter patient body temprature in farenheit");
    scanf("%f", &farenheit);

    if (farenheit > 106.7)
    {
        printf("patient is suffering from Hyperpyrexia");
    }
    else if (farenheit > 100.9)
    {
        printf("patient is suffering from Hyperthermia");
    }
    else if (farenheit > 97.7 && farenheit < 99.5)
    {
        printf("patient is normal");
    }
    else
    {
        printf("patient is suffering from Hypothermia");
    }
}