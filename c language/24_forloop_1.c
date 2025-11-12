// write a program to print ascii table of a to z
//output 
// A = 65
// B = 66
// Z = 90
#include<stdio.h>
void main()
{
    //declaration
    int ascii;
    char letter;
    

    for(ascii = 65;ascii<=90;ascii=ascii+1)
    {
        letter = ascii; //copy ascii variable into letter variable
        printf("\n%c = %d",letter,ascii);
    }

    
}