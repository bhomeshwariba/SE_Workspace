// 5) Implement hierarchical inheritance by creating an InstagramInfluencer class that 
//    inherits from SocialMediaUser and adds a method postStory(storyTitle) which prints 
//    '[username] posted a new story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think 
//   about how SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>
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

// Hierarchical Inheritance
class InstagramInfluencer : public SocialMediaUser
{
public:
    InstagramInfluencer(string u, int f)
        : SocialMediaUser(u, f)
    {
    }

    void postStory(string storyTitle)
    {
        cout<<username<<" posted a new story: "<<storyTitle<<endl;
    }
};
main()
{
    InstagramInfluencer i("Jay", 5000);
    i.displayProfile();
    i.postStory("My New Travel Vlog");


}
