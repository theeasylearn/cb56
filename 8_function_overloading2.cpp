// write a program to make sum of number if values are integer and concate if string using function overloading
#include <iostream>
using namespace std;
void add(int num1, int num2)
{
    int result = num1 + num2;
    cout << endl
         << num1 << " + " << num2 << "=" << result;
}
void add(string message1, string message2)
{
    string result = message1 + message2;
    cout << endl
         << result;
}
void add(int num1, string message1)
{
    cout << endl
         << "invalid operation can not do anything with integer and string";
}
void add(string message, int num1)
{
    add(num1, message);
}
int main()
{
    int a = 10, b = 20;
    string name = "THE EASYLEARN ACADEMY", city = " bhavnagar";
    add(a, b);       // integer version called
    add(name, city); // string version called
    add(a, name);    // integer string version called
    add(name, a); //string integer version called
}