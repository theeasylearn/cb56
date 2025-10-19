/*
    example : 1d array
    write a program to accept 5 student's maths marks from user, display it. findout minimum & maximum marks and their'position

*/
#include <stdio.h>
void PrintStar()
{
    printf("\n");
    for (int count = 1; count <= 80; count++)
    {
        printf("*");
    }
    printf("\n");
}
void main()
{
    // create array
    // datatype array-name[size]
    int marks[5], index, max_marks, max_position;

    // input
    for (index = 0; index < 5; index++) // 1
    {
        printf("enter %d student marks", index + 1);
        scanf("%d", &marks[index]); // 60
    }
    PrintStar();
    printf("Displaying marks");
    PrintStar();

    index = 0;
    while (index < 5)
    {
        printf("%d student marks %d \n", index + 1, marks[index]); // 60
        index++;                                                   // 1
    }

    // findout maximum marks and it's position
    // assume 1st student has maximum marks
    max_marks = marks[0];
    max_position = 0;
    index = 0;

    do
    { // loop body
        if (marks[index] > max_marks)
        {
            // if marks[1] is above max_marks then copy mar[1] into max_marks
            max_marks = marks[index];
            max_position = index + 1;
        }
        index++;
    } while (index < 5);
    printf("\n maximum marks = %d obtained by %d student", max_marks, max_position);
}