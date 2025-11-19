#include <iostream>
using namespace std;
//global variable
int num1,num2;
int& getMin()
{
    //return reference of variable which has minimum value 
    if(num1<num2)
        return num1;
    else 
        return num2;
}
int main()
{
    cout<<endl<<"Enter value for a";
    cin>>num1;

    cout<<endl<<"Enter value for b";
    cin>>num2;

    cout<<endl<<"before calling function num1 ="<<num1<<" num2 ="<<num2;
    getMin() = 0;
    cout<<endl<<"after calling function num1 ="<<num1<<" num2 ="<<num2;
}