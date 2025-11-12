#include <stdio.h>
// write a program to findout factorial of given number using recursion 
//  input : 5 process 1 x 2 x 3 x 4 x 5 output = 120
//  input : 4 process 1 x 2 x 3 x 4 x 5 output = 24
//  input : 3 process 1 x 2 x 3 x 4 x 5 output = 6
int getfactorial(int number) //5 4 3 2 1 1
{
    if (number > 1)
    {
        return number * getfactorial(number - 1);
    }
    else
        return 1;
}
void main()
{
    int number, factorial;
    printf("Enter number");
    scanf("%d", &number); // 5
    factorial = getfactorial(number); //5
    printf("factorial = %d", factorial);
}