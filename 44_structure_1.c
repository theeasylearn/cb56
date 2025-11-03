#include<stdio.h>
// structure example
//declare structure 
struct Student 
{
    //create variable
    char name[32];
    int rollno;
    float weight;
    char gender;
};
void main()
{
    //create structure type variable
    struct Student s1;
    //accept input in members of structure variable
    printf("Enter student name");
    gets(s1.name);

    printf("Enter roll no");
    scanf("%d",&s1.rollno);

    printf("Enter weight");
    scanf("%f",&s1.weight);

    fflush(stdin);
    printf("Enter gender(m=male,f=female)");
    scanf("%c",&s1.gender);

    //display value in members of structure variable 
    printf("Name = %s Roll no = %d weight = %.2f gender=%c",s1.name,s1.rollno,s1.weight,s1.gender);
}
