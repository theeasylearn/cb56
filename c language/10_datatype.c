#include <stdio.h>
void main()
{
    int i;
    unsigned int g;
    long int l;
    unsigned long int uli;
    float f;
    double d;
    char c;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d",&i);

    printf("Enter an unsigned integer: ");
    scanf("%u", &g);

    printf("Enter a long integer: ");
    scanf("%ld", &l); //long decimal

    printf("Enter an unsigned long integer: ");
    scanf("%lu", &uli); //long unsigned

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &d); //long float

    printf("Enter a character: ");
    scanf(" %c", &c); // Note: space before %c to ignore newline

    // Displaying output
    printf("\n--- Output ---\n");
    printf("Integer: %d\n", i);
    printf("Unsigned: %u\n", g);
    printf("Long int: %ld\n", l);
    printf("Unsigned long int: %lu\n", uli);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Character: %c\n", c);
}