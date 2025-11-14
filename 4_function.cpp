#include <iostream>
using namespace std;
// function declaration (announcement)
void add(int a, int b);
void sub(int, int);
int main()
{
    int x = 10, y = 5;
    add(x, y); // calling function
    sub(x, y); // calling function
}
// function definition
void add(int a, int b) {
    int temp = a + b; // here is temp local variable
    cout << endl
         << a << "+" << b << "=" << temp;
}
void sub(int x, int y){
    cout << endl<< x << "-" << y << "=" << x - y;
}

