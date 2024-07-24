#include <iostream>
#include <string>
using namespace std;

string tasks[100];
bool completed[100];
int taskCount = 0;

void addTask() {
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, tasks[taskCount]);
    completed[taskCount] = false;
    taskCount++;
    cout << "Task added!\n";
}

void viewTasks() {
    cout << "Tasks:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i];
        if (completed[i]) {
            cout << " (done)";
        }
        cout << endl;
    }
}

void markCompleted() {
    int num;
    cout << "Enter task number to mark as done: ";
    cin >> num;
    if (num > 0 && num <= taskCount) {
        completed[num - 1] = true;
        cout << "Task marked as done!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void removeTask() {
    int num;
    cout << "Enter task number to remove: ";
    cin >> num;
    if (num > 0 && num <= taskCount) {
        for (int i = num - 1; i < taskCount - 1; i++) {
            tasks[i] = tasks[i + 1];
            completed[i] = completed[i + 1];
        }
        taskCount--;
        cout << "Task removed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    while (true) {
        cout << "\nTo-Do List\n";
        cout << "1. Add task\n";
        cout << "2. View tasks\n";
        cout << "3. Mark task as done\n";
        cout << "4. Remove task\n";
        cout << "5. Quit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            addTask();
        } else if (choice == 2) {
            viewTasks();
        } else if (choice == 3) {
            markCompleted();
        } else if (choice == 4) {
            removeTask();
        } else if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}