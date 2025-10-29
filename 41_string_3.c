/*
    write a program to count no of letters and vowels (a,e,i,o,u) in given string
    input : the easylearn academy
    output : length = 21, vowels = 8
*/
#include <stdio.h>
// create constant (read only variable)
#define SIZE 128
void main()
{
    // create string (1d array of char type)
    char line[SIZE];
    int count = 0, vowel = 0;
    printf("Enter one line of text (with space)");
    gets(line); // can accept string with space

    // display
    printf("your address is ");
    puts(line);

    while (count < SIZE)
    {
        if (line[count] != '\0')
        {
            if (line[count] == 'a' || line[count] == 'e' || line[count] == 'i' || line[count] == 'o' || line[count] == 'u')
            {
                vowel++;
            }
            count++; // count = count + 1
        }
        else
            break;
    }
    printf("size of string %d \nvowels count = %d", count,vowel);
}
