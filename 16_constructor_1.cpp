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
    //default constructor (without argument constructor)
    Account()
    {
        cout<<endl<<"Enter customer name";
        cin>>name;
        fflush(stdin);
        cout<<endl<<"Enter balanace";
        cin>>balance;
        cout<<endl<<"Enter rate";
        cin>>interest;
    }
    void display()
    {
        cout << endl
             << "Name " << name << " balance" << balance << " Interest rate" << interest;
    }
};

int main()
{
    Account a1;  //default constructor will called automatically
    a1.display();
    
    Account a2; //default constructor will called automatically
    a2.display();
}