/*
    write a menu driven program to do following operations on array
    input
    output
    sort ascending (a to z)
    edit
    delete
*/
#include <stdio.h>
// create constant (read only variable)
#define SIZE 5
// declaration of functions
void input(float list[]);
void output(float list[]);
void sort(float list[]);
void edit(float list[], float oldValue, float newValue);
void delete(float list[], float deleteValue);
void main()
{
    //local array
    float list[SIZE];
    int choice;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Sort Ascending (A to Z)\n");
        printf("4. Edit\n");
        printf("5. Delete\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice < 0 || choice > 5)
        {
            printf("invalid choice");
        }
        else
        {
            switch (choice)
            {
            case 0:
                printf("good bye");
                break;

            case 1:
                input(list);
                break;

            case 2:
                output(list);
                break;

            case 3:
                printf("sort array");
                break;

            case 4:
                printf("edit array");
                break;

            case 5:
                printf("delete array");
                break;
            }
        }
    } while (choice != 0);
}

// function body
void input(float list[])
{
    for (int index = 0; index < SIZE; index++) // 1
    {
        printf("enter value for %d position", index + 1);
        scanf("%f", &list[index]); // 60
    }
}
void output(float list[])
{
    // local variable
    int index = 0;
    char letter;
    while (index < 5)
    {
        printf("%d position has %.2f value \n", index + 1, list[index]); // 60
        index++;                                                         // 1
    }
    printf("press any key to continue \n");
    scanf("%c",&letter);
}