// write a program to store 5 students 4 subject marks, total, average and then display it along with result pass or fail, if student has above 40 marks in all subject, he will be considered pass else failed
#include <stdio.h>
void main()
{
    float marks[5][6];
    int row, column;
    printf("Enter 1st students marks");
    printf("\n enter 1st subject marks");
    // this loop is for input and calculate total and average
    for (row = 0; row < 5; row++) // outer for loop
    {
        printf("Enter %d student marks ", row + 1);
        for (column = 0; column < 4; column++) // inner for loop
        {
            printf("\n enter %d subject marks", column + 1);
            scanf("%f", &marks[row][column]); // 85
        }
        // total
        marks[row][4] = marks[row][0] + marks[row][1] + marks[row][2] + marks[row][3];
        marks[row][5] = marks[row][4] / 4; // average
    }
    for (row = 0; row < 5; row++) // outer for loop
    {
        printf("\n %.2f %.2f %.2f %.2f %.2f %.2f", marks[row][0], marks[row][1], marks[row][2], marks[row][3], marks[row][4], marks[row][5]);
        if (marks[row][0] > 39 && marks[row][1] > 39 && marks[row][2] > 39 && marks[row][3] > 39)
        {
            printf(" Pass ");
        }
        else
        {
            printf(" Fail ");
        }
    }
}