// write a program to calculate hours and remaining minutes of given minutes 
// input : 150 minutes output : 2 hours 30 minutes 
// input : 250 minutes output : 4 hours 10 minutes 
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("Enter minutes");
    scanf("%d",&minutes); //150
    hours = minutes / 60; //2
    //minutes = 150 - 120
    minutes = minutes - (hours * 60);
    printf("hours = %d minutes = %d",hours,minutes);
    
}