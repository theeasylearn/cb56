#include <stdio.h>
//variables declared  outside functions are called global variable 
//global variables can by access and changed from all the functions
int a=10,b=20; //
// without written value without argument function
void swap()
{
    int temp;
    printf("\n before swap values in functions \n");
    printf("a = %d b = %d", a, b);
    temp = a;
    b = a;
    a = b;
    printf("\n after swap \n a = %d b = %d \n ", a, b);
}
void main()
{
    printf("\n before swap values in main \n");
    printf("a = %d b = %d", a, b); // 10, 20
    swap();
    printf("\n after swap values in main \n a = %d b = %d", a, b); // 20 10
}