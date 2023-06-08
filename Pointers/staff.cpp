#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct Staff {
    std::string id ;
    std::string name;
    int  age;
    std::string role;
};

void registerStaff() {
    std::string id, name, role;
    int age;

    // Get Staff information from the user
    std::cout << "Enter the Staff ID: ";
    std::getline(std::cin, id);

    std::cout << "Enter the Staff name: ";
    std::getline(std::cin, name);

    std::cout << "Enter the Staff role: ";
    std::getline(std::cin, role);

    std::cout << "Enter the staff age: ";
    std::cin >> age;
    std::cin.ignore(); // Ignore the newline character in the input buffer

    // Open the file in append mode
    std::ofstream file("Staff.txt", std::ios::app);

    // Check if the file was opened successfully
    if (file.is_open()) {
        // Write Staff information to the file
        file << id << "          " << name << "          " <<"     " << role << "\n";
        file.close();

        std::cout << "\nStaff registered successfully!\n";
    } else {
        std::cout << "Error opening the file. Staff registration failed.\n";
    }
}

void viewStaff() {
    std::ifstream file("Staff.txt");
    std::string line;

    if (file.is_open()) {
        std::cout << "\nAvailable Staffs:\n";
        std::cout<<"id================name===============role\n";

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
    } else {
        std::cout << "Error opening the file. Unable to view registered Staffs.\n";
    }
}


