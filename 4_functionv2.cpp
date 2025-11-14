#include <iostream>
using namespace std;
// function definition
void add(int a, int b)
{
    int temp = a + b; // here is temp local variable
    cout << endl
         << a << "+" << b << "=" << temp;
}
void sub(int x, int y)
{
    cout << endl
         << x << "-" << y << "=" << x - y;
}
int main()
{
    int x, y;
    cout << "Enter value for x";
    cin >> x;
    cout << "Enter value for y";
    cin >> y;
    add(x, y); // calling function
    sub(x, y); // calling function
}
