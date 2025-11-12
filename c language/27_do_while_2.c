/* write a program to findout whether given number is prime number or not
    sum examples of prime number : 1 2 3 5 7 11 13 17 19 23 29
*/
#include <stdio.h>
void main()
{
    int number;
    int reminder;
    int divisor = 2;
    printf("enter number to findout whether number is prime or not");
    scanf("%d", &number); // 13
    do
    {
        reminder = number % divisor; // 13%2 ==1
        if (reminder == 0)
        {
            printf("\nthis is not prime number");
            break; // stop the loop
        }
        divisor = divisor + 1; // 3
    } while (divisor < number);
    if (divisor == number || number == 1)
    {
        printf("\n this is prime number");
    }
}