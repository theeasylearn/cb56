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
    string name;
    int balance;
    float rate;
    Account a1;
   
    cout<<endl<<"Enter customer name";
    cin>>name;
    fflush(stdin);
    cout<<endl<<"Enter balanace";
    cin>>balance;
    cout<<endl<<"Enter rate";
    cin>>rate;
    
    a1.setData(name,balance,rate);
    a1.display();
    
    Account a2;
    cout<<endl<<"Enter customer name";
    cin>>name;
    fflush(stdin);
    cout<<endl<<"Enter balanace";
    cin>>balance;
    cout<<endl<<"Enter rate";
    cin>>rate;
    
    a2.setData(name,balance,rate);
    a2.display();
}