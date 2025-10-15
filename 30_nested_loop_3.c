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
    int hash;
    for (int row = 5; row >= 1; row--)
    {
        for (hash = 1; hash <= row - 1; hash++)
        {
            printf(" ");
        }
        for (int astrik = 0; astrik <= (5 - hash); astrik++)
        {
            printf("*");
        }
        printf("\n");
    }
}