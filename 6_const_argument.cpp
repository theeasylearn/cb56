// create function that will return total grams of given kilograms and grams
#include <iostream>
using namespace std;
// function declare and define
int getGrams(const int kg, const int grams)
{
    // local variable
    int totalGrams = (kg * 1000) + grams;
    //kg = 0; //error
    return totalGrams;
}
int main()
{
    int kg, grams;
    cout << endl
         << "Enter kg";
    cin >> kg;
    cout << endl
         << "Enter grams";
    cin >> grams;
    cout << "total grams " << getGrams(kg, grams);
}