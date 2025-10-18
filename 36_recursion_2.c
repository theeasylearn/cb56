// writa a program to display given decimal number into binary number using recursion
#include <stdio.h>
void toBinary(int amount) //67 33 16 8 4 2 1 0
{
    int reminder;
    if (amount > 0)
    {                          // loop body
        reminder = amount % 2; // 1
        amount = amount / 2; // 8
        toBinary(amount); //0
        printf("%d", reminder);
    }
}
void main()
{
    int amount;
    printf("enter number to display it in binary format");
    scanf("%d", &amount); // 67
    toBinary(amount);
}