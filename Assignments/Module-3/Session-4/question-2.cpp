// 2) Build a YouTuber class that inherits from SocialMediaUser and adds a property 
//    channelName and a method uploadVideo(title) that prints 'Video [title] uploaded to 
//    [channelName]'.
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

class YouTuber : public SocialMediaUser
{
private:
    string channelName;

public:
    YouTuber(string u, int f, string c)
        : SocialMediaUser(u, f)
    {
        channelName = c;
    }

    void uploadVideo(string title)
    {
        cout<<"Video "<<title<<"uploaded to "
             <<channelName<<endl;
    }
};
main()
{
    YouTuber y("Bhomesh", 5000, "Bhomesh Gaming");
    y.displayProfile();
    y.uploadVideo("C++ Tutorial");


}
