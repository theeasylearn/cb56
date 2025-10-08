/* write a program to print following series
    1   4   9   16  .....   1000
    1   2   3   4   ......  1000
*/
#include <stdio.h>
void main()
{
    int number = 1, square;

    //loop body
    while(number<=31)
    {
        square = number * number; // 1
        printf("%10d", square);
        number++;
    }
}