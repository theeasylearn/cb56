#include <stdio.h>
union marriage
{
    char isMarried; //1
    int children; //4
};

void main()
{
    // create union type variable
    union marriage m1;
    int size;
    m1.isMarried = 'y';
    printf("is Married = %c, no of children = %d", m1.isMarried, m1.children);
    
    m1.children = 3;
    printf("\n is Married = %c, no of children = %d", m1.isMarried, m1.children);

    size = sizeof m1;
    printf("\n size of m1 = %d",size);
}