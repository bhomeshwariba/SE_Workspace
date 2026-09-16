// 2) Build a class Product for a Flipkart-style app with a parameterized constructor that 
//    takes productName, price, and rating as arguments and displays all details using a 
//    displayInfo() method.
#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    float price;
    float rating;

    
    Product(string name, float p, float r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo()
    {
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price: Rs. "<<price<<endl;
        cout<<"Rating: "<<rating<<"/5"<<endl;
    }
};

main()
{
    Product p("Samsung Galaxy M35", 19999, 4.5);

    p.displayInfo();


}
