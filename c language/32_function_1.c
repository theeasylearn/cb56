#include <stdio.h>
//   1   without return value without argument function
void PrintStar()
{
    printf("\n");
    for (int count = 1; count <= 50; count++)
    {
        printf("*");
    }
    printf("\n");
}
// 2   without return value with argument function
void PrintLetter(char letter, int HowManyTimes)
{
    printf("\n");
    for (int count = 1; count <= HowManyTimes; count++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
// 3   with return value without argument function
float GetPi()
{
    // variable created inside function, is called local variable
    float pi = 22.0 / 7;
    return pi;
}
// 4   with return value with argument function
int GetSquare(int number)
{
    int square = number * number;
    return square;
}
void main()
{
    float pi;
    int square;
    // calling function
    PrintLetter('_', 110);
    PrintStar();
    printf("example of functions");
    PrintStar();
    PrintLetter('^', 100);
    pi = GetPi();
    printf("%f", pi);

    square = GetSquare(20);
    printf("\n square = %d", square);
}