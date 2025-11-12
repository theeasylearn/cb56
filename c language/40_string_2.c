/*
    write a program to accept address from user and display it on screen using library functions
    gets and puts
*/
#include <stdio.h>
// create constant (read only variable)
#define SIZE 512
void main()
{
    //create string (1d array of char type)
    char address[SIZE];
    printf("Enter your name (with space)");
    gets(address);  //can accept string with space

    //display
    printf("your address is ");
    puts(address); 
}
