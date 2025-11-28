#include <iostream>
using namespace std;
// single level inheritance
class Square
{
public:
    int getSquare(int num)
    {
        int square = num * num;
        return square;
    }
};

// public inheritance
class Qube : public Square
{
    public:
    int getQube(int num)
    {
        // call parent class method directly
        int qube = getSquare(num) * num;
        return qube;
    }
};
int main()
{
    Qube q1;
    int number;
    cout << endl
         << "Enter number to get it's square and qube";
    cin>>number;
    cout << "Square =" << q1.getSquare(number); // call parent class method using child class object
    cout << endl
         << "qube =" << q1.getQube(number); //calling child class method using child class object
}