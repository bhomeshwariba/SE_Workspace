// 3) Implement a function to read all content items from content_list.txt and display them 
//    in a numbered list, showing title and platform for each.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayContent() 
{
    ifstream file("content_list.txt");

    if (!file)
	{
        cout<<"Unable to open content_list.txt"<<endl;
        return;
    }

    string title, platform, views, status;
    int count = 1;

    cout<<"\nContent List:\n";

    while (getline(file, title, '|') &&
           getline(file, platform, '|') &&
           getline(file, views, '|') &&
           getline(file, status)) 
	{

        cout<<count<<". Title: "<<title
             <<" | Platform: "<<platform<<endl;

        count++;
    }

    file.close();
}

main()
{
    displayContent();


}
