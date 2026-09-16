// 3) Create a Task class in your favorite OOP language (Java, Python, or C++) with 
//    properties: title and isDone. Add a method markDone() that sets isDone to true, 
//    and a method display() that prints the task with its status
#include <iostream>
using namespace std;

class Task
{
private:
    string title;
    bool isDone;

public:
    
    Task(string t)
    {
        title = t;
        isDone = false;
    }

    
    void markDone()
    {
        isDone = true;
    }

    
    void display()
    {
        cout<<"Task: "<<title<<endl;

        if (isDone)
            cout<<"Status: DONE"<<endl;
        else
            cout<<"Status: NOT DONE"<<endl;
    }
};

main()
{
    Task t1("Complete C++ Assignment");
    t1.display();
    cout<<"\nAfter marking task done:\n";
    t1.markDone();
    t1.display();

    
}
