// 1) Create a Content class with properties: title, platform, views, and status. Write a 
//    method to display all details of a Content object.

#include <iostream>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void displayDetails() 
	{
        cout<<"Title:"<<title<<endl;
        cout<<"Platform:"<<platform<<endl;
        cout<<"Views:"<<views<<endl;
        cout<<"Status:"<<status<<endl;
    }
};
main() 
{
    
	Content c;
    c.title = "C++ Tutorial";
    c.platform = "YouTube";
    c.views = 5000;
    c.status = "Published";

    c.displayDetails();

    
}

