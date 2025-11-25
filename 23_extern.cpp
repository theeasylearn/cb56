#include <iostream>
using namespace std;
// declare global variable
extern int result; // do not initilize
extern void add(int num1, int num2);
extern void sub(int num1, int num2);
extern void mul(int num1, int num2);
extern void division(int num1, int num2);
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    add(num1, num2); // it will call add function in file 22_global.cpp and update result variable
    cout << endl
         << "Global " << result;
    sub(num1, num2);
    cout << endl
         << "Global " << result;
    mul(num1, num2);
    cout << endl
         << "Global " << result;
    division(num1, num2);
    cout << endl
         << "Global " << result;
    
    return 0;
}
/*
run below commands to get output 

g++ -c 22_global.cpp    
g++ -c 23_extern.cpp    
g++ 22_global.o 23_extern.o -o calc.exe
calc.exe
*/