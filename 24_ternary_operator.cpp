#include <iostream>
using namespace std;
int main()
{
    cout << endl
         << "example of ternary operator";
    cout << endl
         << "enter your age";
    int age;
    cin >> age;
    // if (age >= 18)
    // {
    //     cout << endl
    //          << "you are adult";
    // }
    // else
    // {
    //     cout << endl
    //          << "you are minor";
    // }
    string message = (age >= 18) ? "you are adult" : "you are minor";
    cout << message << endl;
    // or 
    cout << (age >= 18 ? "you are adult" : "you are minor") << endl;
}