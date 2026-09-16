// 3) Create a Podcaster class that also inherits from SocialMediaUser and adds a property 
//    podcastName and a method publishEpisode(episodeTitle) that prints 'Episode 
//   [episodeTitle] published on [podcastName]'.
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

class Podcaster : public SocialMediaUser
{
private:
    string podcastName;

public:
    Podcaster(string u, int f, string p)
        : SocialMediaUser(u, f)
    {
        podcastName = p;
    }

    void publishEpisode(string episodeTitle)
    {
        cout<<"Episode "<<episodeTitle
             <<"published on "<<podcastName<<endl;
    }
};

main()
{
    Podcaster p("krish", 5000, "Tech Talks");
    p.displayProfile();
    p.publishEpisode("Episode 1");

   
}
