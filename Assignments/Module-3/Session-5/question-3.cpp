// 3) Write a function in Java or Python that simulates a Flipkart-style search: overload a 
//    method searchProduct() to allow searching by product name or by product name and 
//    category. Demonstrate both usages with sample data.
#include <iostream>
using namespace std;

class Flipkart
{
public:

    
    void searchProduct(string productName)
    {
        cout<<"Searching for product: "<<productName<<endl;
    }

    
    void searchProduct(string productName, string category)
    {
        cout<<"Searching for product: "<<productName<<endl;
        cout<<"Category: "<<category<<endl;
    }
};

main()
{
    Flipkart f;
    f.searchProduct("iPhone 15");
    cout<<endl;
    f.searchProduct("iPhone 15", "Mobiles");

    
}
