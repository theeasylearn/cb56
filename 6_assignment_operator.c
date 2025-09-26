// assignment operators 
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 3;
    printf("\n a = %d b = %d",a,b);
    a+=b; // a = a + b;
    printf("\n a = %d b = %d",a,b);
    a-=b;  // a = a - b;
    printf("\n a = %d b = %d",a,b);
    a*=b; // // a = a * b;
    printf("\n a = %d b = %d",a,b);
    a/=b; // // a = a / b;
    printf("\n a = %d b = %d",a,b);
    a%=b;  // a = a % b;
    printf("\n a = %d b = %d",a,b);
}