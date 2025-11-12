#include <stdio.h>
// concept of pass by value
void swap(int x, int y)
{
    int temp;
    printf("\n before swap values in functions \n");
    printf("x = %d y = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\n after swap \n x = %d y = %d \n ", x, y);
}
void main()
{
    int a,b;
    a = 10;
    b = 20;
    printf("\n before swap values in main \n");
    printf("a = %d b = %d", a, b); // 10, 20

    swap(a,b);
    printf("\n after swap values in main \n a = %d b = %d", a, b); // 20 10
}