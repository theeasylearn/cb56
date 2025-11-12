/* write a program to print week day name from given day of week number */
#include <stdio.h>
void main()
{
    int day;
    printf("Enter day of week (1 to 7)");
    scanf("%d", &day);
    switch (day)
    {
    case 1: // day == 1
        printf("its monday");
        break;

    case 2: // day == 2
        printf("its tuesday");
        break;

    case 3: // day ==3
        printf("its wednesday");
        break;

    case 4: // day == 4
        printf("its thursday");
        break;

    case 5: // day == 5
        printf("its friday");
        break;

    case 6: // day == 6
        printf("its saturday");
        break;

    case 7: // day == 7
        printf("its sunday");
        break;

    default:
        printf("it's invalid day");
        break;
    }
}