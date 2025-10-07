/* write a program to findout whether particular year is leap year or not 
   https://www.wikihow.com/Calculate-Leap-Years 
*/
#include<stdio.h>
void main()
{
    int year,reminder1,reminder2,reminder3;
    printf("Enter year");
    scanf("%d",&year);
    if(year<0)
    {
        printf("\n invalid year");
    }
    else 
    {
        reminder1 = year % 4; //2000%4 = 0
        reminder2 = year % 100; //2000 = 0
        reminder3 = year % 400; //2000 = 0
        if(reminder1 == 0 && reminder2 != 0)
        {
            printf("given year is leap year");
        }
        else 
        {
            if(reminder2 == 0 && reminder3 == 0)
            {
                printf("given year is leap year");
            }
            else 
            {
                printf("given year is not leap year");
            }
        }
    }
}