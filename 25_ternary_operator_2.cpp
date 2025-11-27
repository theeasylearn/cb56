/*
write a program to print season name from given month
Season,     Months,                     Month Numbers
Winter,     November to February,        11–12–1–2
Summer,     March to June,               3–4–5–6
Monsoon,    July to September,           7–8–9-10
*/
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter month number";
    cin>>month;
    string season = (month==11 || month==12 || month<=2) ? "Winter" :(month>=3 && month<=6) ? "summer" : (month>=7 and month<=10) ? "moonsoon" : "invalid month";
    cout<<season;
}