/* write a program to reverse 2 digit given number
   number = 13
   reverse = 31
   number = 89
   reverse = 98
*/
#include <stdio.h>
void main()
{
    int number;
    int first,last;
    int reverse;
    printf("Enter number");
    scanf("%d",&number); // 89
    //separate both numbers 
    first = number/10; //8
    last = number%10; //9
    printf("\n first = %d last = %d",first,last); //first = 8 last 9
    reverse = (last * 10) + first;
    printf("\n reverse = %d",reverse);
}