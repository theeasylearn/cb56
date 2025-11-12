// write a program to convert lower case string into upper case string into another array
#include <stdio.h>
#include <string.h>
#// create constant (read only variable)
#define SIZE 128
void main()
{
    char lower[SIZE], upper[SIZE];
    int ascii,position=0,length;
    printf("Enter your name in lowercase");
    gets(lower);
    length = strlen(lower);
    printf("lendth = %d\n",length);
    while(position<length)
    {
        ascii = lower[position];
        if (ascii >= 97 && ascii <= 122)
        {
            ascii = ascii - 32; // 65
        }
        upper[position] = ascii;
        position++;
    }
    upper[position]  = '\0';
    printf("upper = %s",upper);
}