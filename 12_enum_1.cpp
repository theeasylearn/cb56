#include <iostream>
using namespace std;
enum Gender {
    female,
    male
};

int main()
{
    Gender sex = male;
    cout<<endl<<sex;
    
    sex = female;
    cout<<endl<<sex;

    // sex = 5;//error
    // sex = 1; //error only male and female can be stored
    cout<<endl<<sex;
}