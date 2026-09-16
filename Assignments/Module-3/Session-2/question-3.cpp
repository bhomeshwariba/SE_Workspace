// 3) Create a class called FoodOrder with properties: orderId (number), restaurantName 
//    (string), and isDelivered (boolean). Write a member function markDelivered() that sets 
//    isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().

#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout<<"Order "<<orderId<<" has been delivered!"<< endl;
    }
};

main()
{
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Dominos";
    order.isDelivered = false;

    cout<<"Order ID: "<<order.orderId<<endl;
    cout<<"Restaurant: "<<order.restaurantName<<endl;
    cout<<"Delivered: "<<(order.isDelivered ? "Yes" : "No")<<endl;

    order.markDelivered();

    cout<<"Delivered: "<<(order.isDelivered ? "Yes" : "No")<<endl;


}
