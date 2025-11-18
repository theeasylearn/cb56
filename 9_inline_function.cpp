// write a program to create inline function that convert age into days, months, weeks
#include <iostream>
using namespace std;
inline int toDays(int year)
{
    return year * 365;
}
inline int toMonths(int year)
{
    return year * 12;
}
inline int toWeek(int year)
{
    return year * 52;
}
int main()
{
    int year;
    cout << "Enter your age in years";
    cin >> year;
    int days = toDays(year);
    cout << "your age in days " << days;
    cout << endl
         << "your age in months" << toMonths(year);
    cout << endl
         << "your age in weeks" << toWeek(year);
}