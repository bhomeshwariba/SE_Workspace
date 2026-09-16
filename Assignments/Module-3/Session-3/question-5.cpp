// 5) Modify your Playlist class so that it auto-saves the playlist name to a file called
//    autosave.txt when the object is destroyed, simulating an auto-save feature like 
//    Spotify.<br><br><em><strong>Hint:</strong> Write the file-saving code inside the
//    destructor.</em>
#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
private:
    string name;

public:
    Playlist(string n)
    {
        name = n;
        cout<<"Playlist created: "<<name<<endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");
		file<<"Playlist Name: "<<name<<endl;
        file.close();
        cout<<"Playlist auto-saved!"<<endl;
    }
};

main()
{
    Playlist p("My Favourites");

    
}
