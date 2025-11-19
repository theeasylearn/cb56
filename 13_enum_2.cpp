#include <iostream>
using namespace std;
enum class TrafficLight
{
    red = 10,
    yellow = 20,
    green = 30
};

int main()
{
    TrafficLight signal = TrafficLight::red;
    cout << endl
         << static_cast<int>(signal);
         //change 
         // signal = green;
         signal = TrafficLight::green;
         cout << endl
         << static_cast<int>(signal);
    if(signal == TrafficLight::green)
        cout<<endl<<"you can go";
        return 0;
}