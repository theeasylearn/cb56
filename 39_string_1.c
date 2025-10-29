/*
    write a program to accept name from user and display it on screen using printf and scanf
*/
#include <stdio.h>
// create constant (read only variable)
#define SIZE 32
void main()
{
    //create string (1d array of char type)
    char name[SIZE];
    printf("Enter your name (without space)");
    scanf("%s",name); //note i have not used & operator here

    //display
    printf("your name is %s",name);
}
