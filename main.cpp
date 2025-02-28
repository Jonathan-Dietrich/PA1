#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Task
{
    public:
    string _description;
    Task(std::string description){
        _description = description;
    }
};

class TodoList
{
    public:
    vector<Task> todolist;
    TodoList(){}

    //User story 1 - add task
    void addTask(){
        string description;
        cout << "Enter task description: ";
        getline(std::cin, description);
        Task newTask(description);
        todolist.push_back(newTask); // Add the new task to the list
    }
};

int main() {
    TodoList todo = TodoList();
    int choice;

    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer

        switch (choice) {
            case 1:
                todo.addTask();
                break;
            case 2:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
