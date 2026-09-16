// 1) Create a class called Song in your preferred OOP language with private properties 
//    title and artist. Add public getter and setter methods to access and modify these 
//    properties, then create an object and update its title.
#include <iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    
    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

main() 
{
    
    Song song;
	song.setTitle("Kesariya");
    song.setArtist("Arijit Singh");

    cout<<"Original Title: "<<song.getTitle()<<endl;
    cout<<"Artist: "<<song.getArtist()<<endl;
    song.setTitle("Tum Hi Ho");
    cout<<"Updated Title: "<<song.getTitle()<<endl;


}

