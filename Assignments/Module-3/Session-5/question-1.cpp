// 1) Create a Java class called PaymentProcessor with two overloaded methods processPayment():
//    one that takes only an amount, and one that takes amount and a coupon code. 
//    Print which version is called and the final amount in each case.  
#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    
    void processPayment(double amount)
    {
        cout<<"processPayment() called with amount only"<<endl;
        cout<<"Final Amount: "<<amount<<endl;
    }

    void processPayment(double amount, string couponCode)
    {
        cout<<"processPayment() called with amount and coupon code"<<endl;

        double discount = 0;

        if (couponCode == "SAVE10")
        {
            discount = amount * 0.10;
        }

        double finalAmount = amount - discount;

        cout<<"Coupon Code: "<<couponCode<<endl;
        cout<<"Final Amount: "<<finalAmount<<endl;
    }
};

main()
{
    PaymentProcessor p;
    p.processPayment(1000);
    cout<<endl;
    p.processPayment(1000, "SAVE10");


}
