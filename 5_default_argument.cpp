#include <iostream>
using namespace std;
// function definition
int getSeconds(int hours = 0, int minutes = 0, int seconds = 0)
{
    int totalSeconds = (hours * 60 * 60) + (minutes * 60) + seconds;
    return totalSeconds;
}
int main()
{
    cout<<endl<<getSeconds(); // 0
    cout<<endl<<getSeconds(10); // 36000
    cout<<endl<<getSeconds(10,10); // 36600
    cout<<endl<<getSeconds(10,10,7); // 36607
}
