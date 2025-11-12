// write a program to findout whether shape is square or not
#include<stdio.h>
void main()
{
    int length,width;
    printf("Enter length");
    scanf("%d",&length);

    printf("Enter width");
    scanf("%d",&width);
    
    if (length==width)
    {
        printf("given shape is square");
    }
    else 
    {
        printf("given shape is not square");
    }
}