#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> tasks;

    while (true) {
        std::cout << "To-do List Application\n\n";
        std::cout << "1. Add task\n";
        std::cout << "2. Remove task\n";
        std::cout << "3. View tasks\n";
        std::cout << "4. Exit\n\n";

        std::string choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == "1") {
            std::string task;
            std::cout << "Enter task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            tasks.push_back(task);
            std::cout << "Task added.\n\n";
        }
        else if (choice == "2") {
            if (tasks.size() == 0) {
                std::cout << "No tasks to remove.\n\n";
            }
            else {
                int index;
                std::cout << "Enter index of task to remove: ";
                std::cin >> index;
                if (index < 1 || index > tasks.size()) {
                    std::cout << "Invalid index.\n\n";
                }
                else {
                    std::string task = tasks[index-1];
                    tasks.erase(tasks.begin() + index-1);
                    std::cout << "Task '" << task << "' removed.\n\n";
                }
            }
        }
        else if (choice == "3") {
            if (tasks.size() == 0) {
                std::cout << "No tasks.\n\n";
            }
            else {
                std::cout << "Tasks:\n\n";
                for (int i = 0; i < tasks.size(); i++) {
                    std::cout << i+1 << ". " << tasks[i] << std::endl;
                }
                std::cout << std::endl;
            }
        }
        else if (choice == "4") {
            break;
        }
        else {
            std::cout << "Invalid choice.\n\n";
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}

