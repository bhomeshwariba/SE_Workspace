// 2) Build a console menu that lets users add new content ideas (title, platform, views, 
//    status) and save each entry to a text file named content_list.txt.<br><br><em><strong>
//    Hint:</strong> Use file handling to append each new content item to the file.</em>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content 
{
public:
    string title;
    string platform;
    int views;
    string status;

    void addContent() 
	{
        cout<<"Enter content title: ";
        getline(cin, title);

        cout<<"Enter platform: ";
        getline(cin, platform);

        cout<<"Enter views: ";
        cin>>views;
        cin.ignore();

        cout<<"Enter status: ";
        getline(cin, status);
    }

    void saveToFile() {
        ofstream file("content_list.txt", ios::app);

        if (file.is_open()) 
		{
            file<<"Title: "<<title<<endl;
            file<<"Platform: "<<platform<<endl;
            file<<"Views: "<<views<<endl;
            file<<"Status: "<<status<<endl;
            file<<"------------------------"<<endl;

            file.close();
            cout<<"\nContent saved successfully!\n";
        } 
		else
		{
            cout<<"Unable to open file.\n";
        }
    }
};
main() 
{
    int choice;

    do 
	{
        cout<<"\n===== Content Menu =====\n";
        cout<<"1. Add New Content\n";
        cout<<"2. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();

        if(choice == 1) 
		{
            Content c;
            c.addContent();
            c.saveToFile();
        }
        else if(choice == 2) 
		{
            cout<<"Exiting program...\n";
        }
        else 
		{
            cout<<"Invalid choice!\n";
        }

    } 
	while(choice != 2);

}

