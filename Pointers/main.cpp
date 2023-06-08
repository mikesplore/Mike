#include <iostream>
#include <limits>
#include "functions.h"
#include "staff.h"

int main()
{
    std::cout<<" MIKE PLUG CAR SELLING COMPANY\n";
    int choice;
    bool loggedIn = false;
    
    do {
        std::cout << "          1. Register\n";
        std::cout << "          2. Login\n";
        std::cout << "          3. Quit\n";
        std::cout << "          Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (!loggedIn)
                    loggedIn = loginUser();
                else
                    std::cout << "You are already logged in!\n";
                break;
            case 3:
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
        
        if (loggedIn) {
            int managementOption;
            
            do {

                std::cout << "Choose one of the options below" << std::endl;
                std::cout << "1. Car Management" << std::endl;
                std::cout << "2. Staff Management" << std::endl;
                std::cout << "3. Logout" << std::endl;
                
                std::cout << "Enter your option: ";
                std::cin >> managementOption;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
                
                switch (managementOption) {
                    case 1:
                        int carOption;
                        
                        do {
                            std::cout << "                      \n";
                            std::cout << "---------------------------------\n";
                            std::cout << "WELCOME TO CAR MANAGEMENT SECTION\n";
                            std::cout << "---------------------------------\n";
                            std::cout << "                      \n";
                            std::cout << "Choose one of the options below" << std::endl;
                            std::cout << "-------------------------------\n";
                            std::cout << "1. Register New Car" << std::endl;
                            std::cout << "2. View Registered Cars" << std::endl;
                            std::cout << "3. Delete Car" << std::endl;
                            std::cout << "4. Sell Car" << std::endl;
                            std::cout << "5. View Sold Cars" << std::endl;
                            std::cout << "6. Back to Management Menu" << std::endl;
                            
                            std::cout << "Enter your option: ";
                            std::cin >> carOption;
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
                            
                            switch (carOption) {
                                case 1:
                                    registerCar();
                                    break;
                                case 2:
                                    viewCar();
                                    break;
                                case 3:
                                    deleteCar();
                                    break;
                                case 4:
                                    sellCar();
                                    break;
                                case 5:
                                std::cout<<" \n";
                                std::cout<<"Sold car Records\n";
                                    displaySoldCars();
                                    break;
                                case 6:
                                    std::cout << "Returning to Management Menu..." << std::endl;
                                    break;
                                default:
                                    std::cout << "Invalid option. Please try again." << std::endl;
                                    break;
                            }
                            
                            std::cout << std::endl;
                        } while (carOption != 6);
                        
                        break;
                    case 2:
                        int staffOption;
                        
                        do {
                            std::cout << "STAFF MANAGEMENT\n";
                            std::cout << "--------------------------\n";
                            std::cout << "Choose one of the options below" << std::endl;
                            std::cout << "1. Register New Staff" << std::endl;
                            std::cout << "2. View Registered Staff" << std::endl;
                            std::cout << "3. Back to Management Menu" << std::endl;
                            
                            std::cout << "Enter your option: ";
                            std::cin >> staffOption;
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
                            
                            switch (staffOption) {
                                case 1:
                                    registerStaff();
                                    break;
                                case 2:
                                    viewStaff();
                                    break;
                                case 3:
                                    std::cout << "Returning to Management Menu..." << std::endl;
                                    break;
                                default:
                                    std::cout << "Invalid option. Please try again." << std::endl;
                                    break;
                            }
                            
                            std::cout << std::endl;
                        } while (staffOption != 3);
                        
                        break;
                    case 3:
                        std::cout << "Logging out..." << std::endl;
                        loggedIn = false;
                        break;
                    default:
                        std::cout << "Invalid option. Please try again." << std::endl;
                        break;
                }
                
                std::cout << std::endl;
            } while (managementOption != 3);
        }
        
    } while (choice != 3);
    
    return 0;
}
