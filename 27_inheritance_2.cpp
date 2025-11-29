#include <iostream>
using namespace std;
class KB
{
protected:
    int bytes;

public:
    KB(int bytes)
    {
        this->bytes = bytes;
        cout << endl
             << "KB Constructor called....";
    }
    float getKB()
    {
        float temp = this->bytes / 1024;
        return temp;
    }
};
class MB : public KB
{
    public:
    MB(int bytes) : KB(bytes)
    {
        cout << endl
             << "MB class constructor called...";
    }
    float getMB()
    {
        float temp = getKB() / 1024;
        return temp;
    }
};
int main()
{
    cout<<endl<<"Enter bytes";
    int bytes=0;
    cin>>bytes;
    MB m1(bytes); //create object of MB class
    cout<<endl<<"Kilo bytes"<<m1.getKB();
    cout<<endl<<"mega bytes"<<m1.getMB();
}