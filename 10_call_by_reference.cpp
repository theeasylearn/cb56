// write a program to swap value of two variable using call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << endl
         << "after swap x = " << x << " y = " << y;
}
int main()
{
    int a, b;
    cout << "Enter value for a";
    cin >> a;
    cout << "Enter value for b";
    cin >> b;

    swap(a, b);
    cout << endl
         << "after swap a = " << a << " b = " << b;
}