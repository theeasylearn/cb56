// write a program to make sum of all digit in given amount
/*  input : 12345 process 1+2+3+4+5 ouput : 15
/*  input : 895621 process 8+9+5+6+2+1 ouput : 31

*/
#include <stdio.h>
void main()
{
    int amount, reminder, sum;
    printf("Enter amount");
    scanf("%d", &amount); // 1234
    for(sum=0;amount>0;amount = amount / 10)
    {
        reminder = amount % 10; // 1234 % 10 4
        sum = sum + reminder;
    }
    printf("%d", sum);
}