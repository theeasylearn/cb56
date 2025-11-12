// write a program to findout qube of given positive number 
#include<stdio.h>
void main()
{
    int number,qube;
    printf("Enter positive number");
    scanf("%d",&number); //10

    if(number<0) // < > <= >= == !==
    {
        printf("\n number was negative so converted into positive number \n");
        //convert negative number into positive 
        number = -number;
    }
    //process 
    qube = number * number * number;

    printf("qube - %d",qube);
}