#include <iostream>
using namespace std;
class Product
{
private:
    string title;
    int price;
    float weight;

public:
    //parameterized constructor (with argument constructor)
    Product(string title,int price,float weight=100.0)
    {
       cout<<endl<<"parameterized constructor exeucting";
       //initialize data members
       this->title = title; 
       this->price = price;
       this->weight = weight;
    }
    void display()
    {
        cout << endl
             << "Name " << title << " price " << price << " weight " << weight;
    }
    float getPricePerGram()
    {
        //local variable    
        float pricePerGram = price/weight;
        return pricePerGram;
    }
};

int main()
{
    Product p1("toothpaste",200,350.0); //parameterized constructor 
    p1.display();
    float pricePergram = p1.getPricePerGram();
    cout<<endl<<"Price per gram"<<pricePergram;

    Product p2("shampoo",500); //parameterized constructor 
    p2.display();
}