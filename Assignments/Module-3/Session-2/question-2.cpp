// 2) Add a member function to your Playlist class named togglePublic() that switches 
//   isPublic between true and false each time it is called. Demonstrate by toggling the
//    value twice and printing the result each time.

#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool pub)
    {
        name = n;
        createdOn = date;
        isPublic = pub;
    }

    void togglePublic()
    {
        isPublic = !isPublic;
    }

    void show()
    {
        cout<<"Playlist Name: "<<name<<endl;
        cout<<"Created On: "<<createdOn<<endl;
        cout<<"Is Public: "<<(isPublic ? "True" : "False")<<endl;
    }
};

main()
{
    Playlist p("My Songs", "16-09-2026", true);

    cout<<"Initial Value:"<<endl;
    p.show();

    p.togglePublic();
    cout<<"\nAfter First Toggle:"<<endl;
    p.show();

    p.togglePublic();
    cout<<"\nAfter Second Toggle:"<<endl;
    p.show();

    
}


