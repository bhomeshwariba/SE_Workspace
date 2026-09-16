// 2) Read all song names from my_fav_songs.txt using ifstream and display each song on a 
//    new line in the console.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main() 
{
    ifstream file("my_fav_songs.txt");
    string song;

    if (!file) 
	{
        cout<<"File could not be opened!"<<endl;
        return 1;
    }

    cout<<"My Favorite Songs:"<<endl;

    while (getline(file, song)) 
	{
        cout<<song<<endl;
    }

    file.close();

}
