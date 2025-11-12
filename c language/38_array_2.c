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
    // local array
    float list[SIZE], oldValue, newValue, currentValue;
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
                printf("Enter value to search & replace");
                scanf("%f", &oldValue); // 20.56
                printf("Enter replacing value ");
                scanf("%f", &newValue); // 100.88
                edit(list, oldValue, newValue);
                break;

            case 5:
                printf("Enter value to search & remove");
                scanf("%f", &currentValue); // 20.56
                delete(list, currentValue);
                break;
            }
        }
    } while (choice != 0);
}

// function body
void delete(float list[], float currentValue)
{
    int index;
    for (index = 0; index < SIZE; index++)
    {
        if (list[index] == currentValue)
        {
            printf("Value found and deleted");
            list[index] = 0.0;
            break; // stop loop in between
        }
    }
    if (index == SIZE)
    {
        printf("\n value not found ");
    }
}
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
    scanf("%c", &

                letter);
}
void edit(float list[], float oldValue, float newValue)
{
    int index;
    for (index = 0; index < SIZE; index++)
    {
        if (list[index] == oldValue)
        {
            printf("\n value found ");
            list[index] = newValue;
            break; // loop will stop inbetween
        }
    }
    if (index == SIZE)
    {
        printf("\n value not found ");
    }
}