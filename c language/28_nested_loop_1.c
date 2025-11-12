/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{
    for (int row = 1; row <= 5; row++) // outer loop
    {
        for (int astrik = 1; astrik <= row; astrik++) // inner loop
        {
            printf("* ");
        }
        printf("\n"); // new line
    }
}