// 1) Create a base class called SocialMediaUser with properties username and followers,
//     and a method displayProfile() that prints the username and follower count.
#include <iostream>
using namespace std;

class SocialMediaUser
{
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string u, int f)
    {
        username = u;
        followers = f;
    }

    void displayProfile()
    {
        cout<<"Username: "<<username<<endl;
        cout<<"Followers: "<<followers<<endl;
    }
};

main()
{
    SocialMediaUser user("Bhomesh", 5000);
    user.displayProfile();

}
