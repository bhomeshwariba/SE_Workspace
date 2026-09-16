// 4) Build a simple TaskList class/object that stores multiple Task objects and provides
//    addTask(title), markTaskDone(index), and showTasks() methods. Demonstrate adding 3 
//    tasks, marking one as done, and displaying all tasks with their statuses.
#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

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
        cout<<title<<" - ";

        if (isDone)
            cout<<"DONE"<<endl;
        else
            cout<<"NOT DONE"<<endl;
    }
};


class TaskList
{
private:
    vector<Task> tasks;

public:
    // Add new task
    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    // Mark task as done using index
    void markTaskDone(int index)
    {
        if (index >= 0 && index < tasks.size())
        {
            tasks[index].markDone();
        }
        else
        {
            cout<<"Invalid index!"<<endl;
        }
    }

    // Display all tasks
    void showTasks()
    {
        cout<<"\n--- Task List ---"<<endl;

        for (int i = 0; i < tasks.size(); i++)
        {
            cout<<i<< ". ";
            tasks[i].display();
        }
    }
};

main()
{
    TaskList list;
	list.addTask("Complete C++ Assignment");
    list.addTask("Study OOP");
    list.addTask("Practice Coding");

    // Mark second task as done
    list.markTaskDone(1);

    // Display all tasks
    list.showTasks();


}
