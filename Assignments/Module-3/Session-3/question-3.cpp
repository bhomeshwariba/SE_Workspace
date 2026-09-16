// 3) Create a class Movie with a parameterized constructor and then use a copy constructor
//    to duplicate a Movie object. Print both the original and copied movie details to show 
//    they are identical.
#include <iostream>
using namespace std;

class Movie
{
public:
    string movieName;
    string director;
    float rating;

    
    Movie(string name, string dir, float r)
    {
        movieName = name;
        director = dir;
        rating = r;
    }

    
    Movie(const Movie &m)
    {
        movieName = m.movieName;
        director = m.director;
        rating = m.rating;
    }

    void displayInfo()
    {
        cout<<"Movie Name: "<<movieName<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"Rating: "<<rating<<"/5"<<endl;
    }
};

main()
{
    
    Movie original("3 Idiots", "Rajkumar Hirani", 4.8);

    
    Movie copied(original);

    cout<<"Original Movie:"<<endl;
    original.displayInfo();

    cout<<"\nCopied Movie:"<<endl;
    copied.displayInfo();

    
}
