// assignment operators
#include <stdio.h>
void main()
{
    int a = 10;
    int b = 0;
    printf("\n a = %d b = %d", a, b);

    // b = a;
    // a = a + 1;
    // OR 
    b = a++; // postfix 
    printf("\n a = %d b = %d", a, b);
    
    a = 10;
    b = 0;
    // a = a + 1;
    // b = a;
    // OR 
    b = ++a; // prefix
    printf("\n a = %d b = %d", a, b);

    //use prefix and postfix - operator as above
}