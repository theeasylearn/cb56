#include<stdio.h>
void main()
{
    //declaration with initilization
    int a = 10;
    int b = 10;
    int c = 10;
    int result;
    printf("a = %d b = %d c = %d",a,b,c);

    // and && 
    //       true   &&  true
    result = a == b && b == c;
    printf("\n%d = %d == %d && %d == %d",result,a,b,b,c);
    
    // or ||
    //true=      true   ||    false
    result = a == 10 || b == 20;
    printf("\n%d = %d == 10 || %d == 20",result,a,b);

    //false       false      false   
    result = a != 10 || b < 10;
    printf("\n%d = %d != 10 || %d < 20",result,a,b);

    result = !(a == b); 
    printf("\n%d = !(%d == %d)",result,a,b);

    result = !(a != b); 
    printf("\n%d = !(%d != %d)",result,a,b);
}