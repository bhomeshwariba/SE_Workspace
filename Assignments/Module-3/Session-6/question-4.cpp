// 4) Refactor the following code so that the user’s phone number in the UserProfile class 
//    is private and can only be set or retrieved using public methods.<br><br><em><strong>
//    Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber
//   () and getPhoneNumber() methods.</em>
#include <iostream>
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

main() {
    UserProfile user;
    user.setPhoneNumber("9510643623");
    cout<<"Phone Number: "<<user.getPhoneNumber()<<endl;


}
