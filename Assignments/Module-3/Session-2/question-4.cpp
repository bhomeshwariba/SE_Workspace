// 4) Extend your Playlist class to include a member function addSong(songTitle) that adds 
//    the song title to an array property called songs. Demonstrate by adding three song 
//    titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> 
//    Initialize songs as an empty array inside the constructor.</em>
#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    string songs[10];
    int songCount;

    Playlist()
    {
        songs[0] = "";
        songCount = 0;
    }

    void addSong(string songTitle)
    {
        songs[songCount] = songTitle;
        songCount++;
    }

    void displaySongs()
    {
        cout<<"Songs in Playlist:"<<endl;

        for (int i = 0; i < songCount; i++)
        {
            cout<<i + 1<<". "<<songs[i]<<endl;
        }
    }
};

main()
{
    Playlist p;

    p.name = "My Playlist";
    p.createdOn = "16-09-2026";
    p.isPublic = true;

    p.addSong("Kesariya");
    p.addSong("Tum Hi Ho");
    p.addSong("Chaleya");

    p.displaySongs();

    
}
