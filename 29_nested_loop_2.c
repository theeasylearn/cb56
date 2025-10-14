/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
#include <stdio.h>
void main()
{
   int astrik = 1;
   int row = 5;
   while(row>=1)
   {
      while (astrik <= row) //5
      {
         printf("* ");
         astrik++;
      }
      printf("\n");
      astrik = 1;
      row--;
   }
   
}