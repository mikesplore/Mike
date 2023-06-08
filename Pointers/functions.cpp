#include <iostream>
#include <fstream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <termios.h> 
#include <limits>



struct Car {
    std::string model;
    std::string make;
    std::string id;
    int year;
};

std::map<std::string, std::string> users;

void saveUserDetails() {
    std::ofstream outFile("user_details.txt");

    if (outFile.is_open()) {
        for (const auto& user : users) {
            outFile << user.first << " " << user.second << std::endl;
        }
        outFile.close();
    } else {
        std::cout << "Error opening file for writing user details." << std::endl;
    }
}

void loadUserDetails() {
    std::ifstream inFile("user_details.txt");

    if (inFile.is_open()) {
        std::string username, password;
        while (inFile >> username >> password) {
            users[username] = password;
        }
        inFile.close();
    } else {
        std::cout << "No existing user details found." << std::endl;
    }
}

void registerUser() {
    std::string username, password;
    std::cout << "          Enter username: ";
    std::cin >> username;

    if (users.count(username) > 0) {
        std::cout << "          Username already exists. Please choose a different username.\n";
        return;
    }

    std::cout << "          Enter password: ";
    std::cin >> password;

    users[username] = password;
    std::cout << "          Registration successful!\n";

    saveUserDetails();  // Save user details to file
}



std::string getPasswordInput()
{
    std::string password;

    struct termios oldSettings, newSettings;
    tcgetattr(fileno(stdin), &oldSettings); // Get the current terminal settings
    newSettings = oldSettings;
    newSettings.c_lflag &= ~(ECHO); // Turn off echoing of characters
    tcsetattr(fileno(stdin), TCSANOW, &newSettings); // Apply new terminal settings

    std::getline(std::cin, password); // Read password without echoing characters

    tcsetattr(fileno(stdin), TCSANOW, &oldSettings); // Restore original terminal settings

    return password;
}

bool loginUser()
{
    std::string username, password;
    std::cout << "          Enter username: ";
    std::cin >> username;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Consume the newline character

    loadUserDetails(); // Load user details from file

    if (users.count(username) == 0) {
        std::cout << "          Username not found. Please register first.\n";
        return false;
    }

    std::cout << "          Enter password: ";
    password = getPasswordInput();

    if (users[username] != password) {
        std::cout << "          Incorrect password. Login failed.\n";
        return false;
    }

    std::cout << "          Login successful!\n";
    return true;
}




void registerCar() {
    std::string model, make, id;
    int year;

    // Get car information from the user
    std::cout << "          Enter the car Model: ";
    std::getline(std::cin, model);

    std::cout << "          Enter the car Make: ";
    std::getline(std::cin, make);

    std::cout << "          Enter the car ID: ";
    std::getline(std::cin, id);

    std::cout << "          Enter the Manufacture year: ";
    std::cin >> year;
    std::cin.ignore(); // Ignore the newline character in the input buffer

    // Open the file in append mode
    std::ofstream file("cars.txt", std::ios::app);

    // Check if the file was opened successfully
    if (file.is_open()) {
        // Write car information to the file
        file << model << "          " << make << "          " << id << "       " << year << "\n";
        file.close();

        std::cout << "\n          Car registered successfully!\n";
    } else {
        std::cout << "          Error opening the file. Car registration failed.\n";
    }
}


void viewCar() {
    std::ifstream file("cars.txt");
    std::string line;

    if (file.is_open()) {
        std::cout << "\n          Available Cars:\n";
        std::cout<<"          Model================Make============ID====Year\n";

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
    } else {
        std::cout << "          Error opening the file. Unable to view registered cars.\n";
    }
}


void deleteCar() {
    std::string id;
    std::vector<Car> cars;

    // Get car ID to delete
    std::cout << "          Enter the car ID to delete: ";
    std::getline(std::cin, id);

    std::ifstream file("cars.txt");

    if (file.is_open()) {
        std::string line;
        bool carFound = false;  // Flag to track if the car ID was found

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string model, make, carId;
            int year;
            if (iss >> model >> make >> carId >> year) {
                if (carId != id) {
                    // Car record does not match the ID, add it to the vector
                    Car car;
                    car.model = model;
                    car.make = make;
                    car.id = carId;
                    car.year = year;
                    cars.push_back(car);
                } else {
                    carFound = true;  // Car ID found
                }
            }
        }
        file.close();

        if (carFound) {
            std::ofstream outFile("cars.txt", std::ios::trunc); // Open the file in truncation mode

            if (outFile.is_open()) {
                // Write the updated car records to the file
                for (const Car& car : cars) {
                    outFile << car.model << "          " << car.make << "          " << car.id << "       " << car.year << "\n";
                }
                outFile.close();
                std::cout << "\n          Car deleted successfully!\n";
            } else {
                std::cout << "          Error opening the file. Car deletion failed.\n";
            }
        } else {
            std::cout << "\n          Car ID not found. Deletion failed.\n";
        }
    } else {
        std::cout << "          Error opening the file. Car deletion failed.\n";
    }
}


void sellCar() {
    std::string id;
    std::vector<Car> cars;

    // Get car ID to sell
    std::cout << "          Enter the car ID to sell: ";
    std::getline(std::cin, id);

    std::ifstream file("cars.txt");

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string model, make, carId;
            int year;
            if (iss >> model >> make >> carId >> year) {
                if (carId == id) {
                    // Car found, mark it as sold
                    std::ofstream soldFile("sold_cars.txt", std::ios::app);
                    if (soldFile.is_open()) {
                        soldFile << line << "\n";  // Write the complete record to the "sold_cars.txt" file
                        soldFile.close();
                    } else {
                        std::cout << "          Error opening the sold cars file. Car sale record could not be saved.\n";
                        return;  // Exit the function if unable to save the sale record
                    }
                } else {
                    // Car record does not match the ID, add it to the vector
                    Car car;
                    car.model = model;
                    car.make = make;
                    car.id = carId;
                    car.year = year;
                    cars.push_back(car);
                }
            }
        }
        file.close();

        std::ofstream outFile("cars.txt", std::ios::trunc); // Open the file in truncation mode

        if (outFile.is_open()) {
            // Write the updated car records to the file
            for (const Car& car : cars) {
                outFile << car.model << "          " << car.make << "          " << car.id << "       " << car.year << "\n";
            }
            outFile.close();
            std::cout << "\n          Car sold successfully!\n";
        } else {
            std::cout << "          Error opening the file. Car sale failed.\n";
        }
    } else {
        std::cout << "          Error opening the file. Car sale failed.\n";
    }
}



void displaySoldCars() {
    std::ifstream file("sold_cars.txt");

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string model, make, id;
            int year;
            if (iss >> model >> make >> id >> year) {
                std::cout << "-------------------------------\n";
                std::cout << "Model: " << model << std::endl;
                std::cout << "Make: " << make << std::endl;
                std::cout << "ID: " << id << std::endl;
                std::cout << "Year: " << year << std::endl;
                std::cout << "-------------------------------\n";
                std::cout << std::endl;
            }
        }
        file.close();
    } else {
        std::cout << "          Error opening the file. Could not display sold cars.\n";
    }
}
