#include <iostream>
using namespace std;
class Account
{
private:
    // data member (instance variable)
    string name;
    int balance = 0;
    float interest;

public:
    // function(methods)
    void setData(string name, int balance, float interest)
    {
        this->name = name;
        this->balance = balance;
        this->interest = interest;
    }
    void display()
    {
        cout << endl
             << "Name " << name << " balance" << balance << " Interest rate" << interest;
    }
};

int main()
{
    Account a1;
    a1.setData("Ankit Patel", 10000000, 7.25);
    a1.display();

    Account a2;
    a2.setData("Divya Patel", 60000000,9.25);
    a2.display();
}