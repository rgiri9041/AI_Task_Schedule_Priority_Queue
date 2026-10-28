#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct AITask{
    string name;
    int priority;
};

class TaskScheduler {
    private:
    vector<AITask> tasks;

    public:

    void addTask(string name, int priority){
        AITask task;
        task.name = name;
        task.priority = priority;

        tasks.push_back(task);
        cout << "Task added successfully!\n";
    }

    void nextTask(){
        if(tasks.empty()){
            cout << "No task available!\n";
            return;
        }

        int highest = 0;
        for(int i =1; i<tasks.size(); i++){
            if(tasks[i].priority > tasks[highest].priority){
                highest = i;
            }
        }

        cout << "Processing: " << tasks[highest].name << "\n";
        cout << "Priority: " << tasks[highest].priority << "\n";

        tasks.erase(tasks.begin() + highest);
    }

    void displayTasks(){
        if(tasks.empty()){
            cout << "No pending tasks! \n";
            return;
        }
        cout << "\n---- Pending Tasks ----\n";

        for (int i = 0; i<tasks.size(); i++){
            cout << "Task: " << tasks[i].name;
            cout << "\n Priority: " << tasks[i].priority << "\n";
        }
    }
};

int main(){
    TaskScheduler scheduler;

    int choice;
    do{
        cout << "\n ====== AI Task Scheduler ======\n";
        cout << "1. Add Task\n";
        cout << "2. Process Highest Priority Task \n";
        cout << "3. View All Tasks \n";
        cout << "4. Exit \n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            string name;
            int priority;

            cout << "Enter task name: ";
            cin >> ws;
            getline(cin,name);

            cout << "Enter priority (1-10): ";
            cin >> priority;

            if(priority >= 1 && priority <= 10){
                scheduler.addTask(name,priority);
            }else{
                cout << "Priority must be from 1 to 10!\n";
            }
        }
        else if (choice == 2){
            scheduler.nextTask();
        }
        else if(choice ==3){
            scheduler.displayTasks();
        }
        else if(choice ==4){
            cout << "Thank You! for using priority scheduler Application :)\n";
        }
        else{
            cout << "Invalid choice !\n";
        }

    }while (choice != 4);
    return 0;
}