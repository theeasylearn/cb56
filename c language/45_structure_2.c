#include <stdio.h>
#define SIZE 5
// array of structure example
// declare structure
struct Student
{
    // create variable
    char name[32];
    int rollno;
    float weight;
    char gender;
};
void main()
{
    // create array of structure type variable
    struct Student s1[SIZE];
    // accept input in members of structure variable

    for (int index = 0; index < SIZE; index++)
    {
        printf("Enter %d student detail", index + 1);
        printf("\nstudent name");
        fflush(stdin);
        gets(s1[index].name);

        printf("Enter roll no");
        scanf("%d", &s1[index].rollno);

        printf("Enter weight");
        scanf("%f", &s1[index].weight);

        fflush(stdin);
        printf("Enter gender(m=male,f=female)");
        scanf("%c", &s1[index].gender);
    }

    // display value in members of structure variable
    for (int index = 0; index < SIZE; index++)
    {
        printf("\nName = %s Roll no = %d weight = %.2f gender=%c", s1[index].name, s1[index].rollno, s1[index].weight, s1[index].gender);
    }
}
