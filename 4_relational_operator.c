//example of relational operators 
#include<stdio.h>
void main()
{
    int num1,num2,result;
    num1 = 10;
    num2 = 20;

    result = num1 == num2; //false(0)
    printf("%d = %d == %d ",result,num1,num2);

    result = num1 != num2; // true(1)
    printf("\n%d = %d != %d ",result,num1,num2);

    result = num1 < num2; // true(1)
    printf("\n%d = %d < %d ",result,num1,num2);

    result = num1 <= num2; // true(1)
    printf("\n%d = %d <= %d ",result,num1,num2);

    result = num1 > num2; // false(0)
    printf("\n%d = %d > %d ",result,num1,num2);

    result = num1 >= num2; // false(0)
    printf("\n%d = %d >= %d ",result,num1,num2);


}