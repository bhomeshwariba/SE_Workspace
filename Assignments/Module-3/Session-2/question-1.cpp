// 1) Create a class called Playlist with properties: name (string), createdOn (date), and 
//    isPublic (boolean). Instantiate an object of Playlist and print all its properties.
#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    void display()
    {
        cout<<"Playlist Name: "<<name<<endl;
        cout<<"Created On: "<<createdOn<<endl;
        cout<<"Public: "<<(isPublic ? "Yes" : "No")<<endl;
    }
};

main()
{
    Playlist p1;

    p1.name = "My Favorite Songs";
    p1.createdOn = "16-09-2026";
    p1.isPublic = true;

    p1.display();


}
