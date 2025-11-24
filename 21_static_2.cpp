#include <iostream>
using namespace std;
class Account
{
private:
    // data member
    int id, balance;
    string name;
    // static variable
    static int count;

public:
    // default argument constructor (without argument)
    Account()
    {
        cout << endl
             << "Enter account holder name";
        cin >> name;
        fflush(stdin);
        cout << "Enter account balance";
        cin >> balance;
        Account::count++;
        id = count;
    }

    void display()
    {
        cout << endl
             << "Account id " << id;
        cout << endl
             << "Account name " << name;
        cout << endl
             << "Account balance " << balance;
    }
    // static method can display static variable's value
    static void showCount()
    {
        cout << endl
             << " count " << count;
    }
};
int Account::count = 0;
int main()
{
    Account a1; // default constructor called
    a1.display();

    Account a2; // default constructor called
    a2.display();

    Account a3; // default constructor called
    a3.display();
    Account::showCount();
}
