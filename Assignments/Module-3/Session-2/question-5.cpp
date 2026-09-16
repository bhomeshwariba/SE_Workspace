// 5) Refactor your FoodOrder class so that the constructor takes an object as a parameter
//   (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update 
//    your instantiation code to use this new constructor signature.
 #include <iostream>
using namespace std;


struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    
    FoodOrder(OrderData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        cout<<"Order "<<orderId<<" has been delivered!"<<endl;
    }

    void display()
    {
        cout<<"Order ID: "<<orderId<<endl;
        cout<<"Restaurant: "<<restaurantName<<endl;
        cout<<"Delivered: "<<(isDelivered ? "Yes" : "No")<<endl;
    }
};

main()
{
    
    OrderData data = {101, "Dominos", false};
    FoodOrder order(data);
    order.display();
	order.markDelivered();
	order.display();

    
}
