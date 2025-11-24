#include <iostream>
using namespace std;
static int globalCount = 0;
void counter()
{
    static int count = 0; //local static 
    cout << endl
         << "global count " << globalCount;
    cout << " count = " << count << endl;
    globalCount = globalCount + 1;
    count = count + 1;
}
int main()
{
    counter(); // 1st call
    counter(); // 2nd call
    counter(); // 3rd call
    counter(); // 4th call
    cout<<endl<<"global count "<<globalCount;
    // cout<<endl<<"local count "<<count;
}