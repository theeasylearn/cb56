#include <iostream>
using namespace std;
class MyDate
{
private:
    int day, month, year;

public:
    //default constructor
    MyDate()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
        
    }
    // paramterized constructor
    MyDate(int d, int m, int y)
    {
        cout << endl
             << "paramterized constructor called";
        day = d;
        month = m;
        year = y;
    }
    // copy constructor
    MyDate(const MyDate &date)
    {
        cout << endl
             << "copy constructor called";
        day = date.day;
        month = date.month;
        year = date.year;
    }
    void display()
    {
        cout << endl
             << day << "/" << month << "/" << year;
    }
};
int main()
{
    MyDate d1(1, 11, 2025); // paramterized constructor
    d1.display();

    MyDate d2(d1); //copy constructor
    d2.display();

    MyDate d3;
    d3.display();
}