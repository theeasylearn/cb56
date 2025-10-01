// write a program to findout whether shape is potrait or landscape from given length and width.
#include<stdio.h>
void main()
{
    int length,width;
    printf("Enter length");
    scanf("%d",&length);

    printf("Enter width");
    scanf("%d",&width);
    
    if(length<width)
    {
        printf("given shape is landscape");
    }
    else 
    {
        printf("given shape is potrait");
    }
}