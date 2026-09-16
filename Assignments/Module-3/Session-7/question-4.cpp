// 4) Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and
//    prices, save them to a file called wishlist.txt, then read the file and display each 
//    product with its price.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    string productName;
    float price;
    ofstream outFile("wishlist.txt");

    if (!outFile) 
	{
        cout<<"File could not be opened!"<<endl;
        return 1;
    }

    for (int i = 1; i <= 3; i++)
	{
        cout << "Enter product " << i << " name: ";
        getline(cin, productName);

        cout << "Enter price: ";
        cin>>price;
        cin.ignore();

        outFile<<productName<<"|"<<price<<endl;
    }

    outFile.close();

    ifstream inFile("wishlist.txt");

    if (!inFile) 
	{
        cout<<"File could not be opened!"<<endl;
        return 1;
    }

    cout<<"\n--- My Wishlist ---"<<endl;
    while (getline(inFile, productName, '|'))
	{
        inFile>>price;
        inFile.ignore();

        cout<<"Product: "<<productName<<" | Price: ?"<<price<<endl;
    }

    inFile.close();
}
