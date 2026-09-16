// 5) Explain in your own words the difference between encapsulation and abstraction, using 
//    examples from any social media app you use daily (like Instagram or WhatsApp).
#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string phoneNumber;

public:
    void setPhoneNumber(string number) {
        phoneNumber = number;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

main() 
{
    UserProfile user;
    user.setPhoneNumber("9510643623");
    cout<<"Phone Number:"<<user.getPhoneNumber()<<endl;

    
}
