// write a program to findout largest number from 2 given number and 3 given number using function overloading
#include <iostream>
using namespace std;
int getMax(int a, int b)
{
    if (a > b)
        return a; // we can skip braces pair for decsion/loop in case of only single line
    else
        return b;
}
int getMax(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
int getMax(int a, int b, int c, int d)
{
    int max;
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
    }

    if (d > max)
        max = d;

    return max;
}
int main()
{
    int a = 10, b = 20, c = 130, d = 50;
    cout << endl
         << "maximum from 2 number" << getMax(a, d);
    cout << endl
         << "maximum from 3 number" << getMax(a, c, d);
    cout << endl
         << "maximum from 4 number" << getMax(a, b, c, d);
    
}