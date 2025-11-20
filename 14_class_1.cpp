#include<iostream>
using namespace std;
class Student
{
    public:
    //data member (instance variable)
    string name;
    int age;
    float weight;
    //function(methods)
    void display()
    {
        cout<<endl<<"name = "<<name<<" age = "<<age<<" weight = "<<weight;
    }
};

int main(){
    //create object
    //Classname object
    Student s1;
    s1.name = "Lokesh gavaskar";
    s1.age = 25;
    s1.weight = 61.25;
    s1.display();

    Student s2;
    s2.name = "Kishan parmar";
    s2.age = 23;
    s2.weight = 48.99;
    s2.display();
}