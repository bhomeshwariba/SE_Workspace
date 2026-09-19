// 4) Add an option in your console app to let users update the status of any content idea by
//    selecting its number from the displayed list and saving the change back to the file.
//    <br><br><em><strong>Hint:</strong> You will need to read all items, modify the selected
//    one, and overwrite the file.</em>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;
};

void updateStatus() 
{
    Content items[100];
    int count = 0;

    ifstream file("content_list.txt");

    if (!file) 
	{
        cout<<"Unable to open content_list.txt"<<endl;
        return;
    }


    while (count < 100 &&
           getline(file, items[count].title, '|') &&
           getline(file, items[count].platform, '|')) {

        string viewsText;
        getline(file, viewsText, '|');
        items[count].views = stoi(viewsText);

        getline(file, items[count].status);

        count++;
    }

    file.close();

    
    cout<<"\nContent List:\n";

    for (int i = 0; i < count; i++) 
	{
        cout<<i + 1<< ". "
            <<items[i].title
            <<" | " << items[i].platform
            <<" | Status: "<<items[i].status<<endl;
    }

    
    int choice;
    cout<<"\nEnter content number to update: ";
    cin>>choice;

    if (choice < 1 || choice > count) 
	{
        cout << "Invalid content number!"<<endl;
        return;
    }


    cout<<"Enter new status: ";
    cin>>items[choice - 1].status;

    
    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) 
	{
        outFile <<items[i].title<<"|"
                <<items[i].platform<<"|"
                <<items[i].views<<"|"
                <<items[i].status<<endl;
    }

    outFile.close();

    cout<<"Status updated successfully!"<<endl;
}

main() 
{
    updateStatus();

    
}

