#include <iostream>
using namespace std;

int main() {
    int option;

    do {
        cout << "Sim Toolkit" << endl;
        cout << "1. Safaricom+" << endl;
        cout << "2. Mpesa" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter an option: ";
        cin >> option;

        switch (option) {
            case 1:
                do {
                    cout << "Safaricom" << endl;
                    cout << "1. My account" << endl;
                    cout << "2. M-Bank services" << endl;
                    cout << "0. Back to main menu" << endl;
                    cout << "Enter an option: ";
                    cin >> option;
                    switch (option) {
                        case 1:
                            // Handle "My account" option
                            cout << "My account selected." << endl;
                            break;
                        case 2:
                            // Handle "M-Bank services" option
                            cout << "M-Bank services selected." << endl;
                            break;
                        case 0:
                            // Go back to the main menu
                            break;
                        default:
                            cout << "Invalid option entered" << endl;
                    }
                } while (option != 0);
                break;

            case 2:
                do {
                    cout << "Mpesa" << endl;
                    cout << "1. Send money" << endl;
                    cout << "2. Withdraw cash" << endl;
                    cout << "3. Buy Airtime" << endl;
                    cout << "4. Loans and Savings" << endl;
                    cout << "5. Lipa na Mpesa" << endl;
                    cout << "6. My account" << endl;
                    cout << "0. Back to main menu" << endl;
                    cout << "Enter an option: ";
                    cin >> option;
                    switch (option) {
                        case 1:
                            // function for send money to be called here
                            cout << "Send money selected." << endl;
                            break;
                        case 2:
                            do {
                                cout << "Mpesa - Withdraw Cash" << endl;
                                cout << "1. Withdraw from agent" << endl;
                                cout << "2. Withdraw from ATM" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        //Withdraw from agent function
                                        cout << "Withdraw from agent selected." << endl;
                                        break;
                                    case 2:
                                        //Withdraw from ATM function
                                        cout << "Withdraw from ATM selected." << endl;
                                        break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;

                        case 3:
                            do {
                                cout << "Mpesa - Buy Airtime" << endl;
                                cout << "1. My Phone" << endl;
                                cout << "2. Other Phone" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        //Buy airtime function
                                        cout << "Airtime for my phone selected." << endl;
                                        break;
                                    case 2:
                                        //Airtime for other number
                                        cout << "other number selected." << endl;
                                        break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;
                        case 4:
                            do {
                                cout << "Mpesa - Loans and Savings" << endl;
                                cout << "1. M-shwari" << endl;
                                cout << "2. KCB M-PESA" << endl;
                                cout << "3. Back to Mpesa menu" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        do {
                                            cout << "Mpesa - M-Shwari" << endl;
                                            cout << "1. Send to M-shwari" << endl;
                                            cout << "2. Withdraw from M-shwari" << endl;
                                            cout << "3. Lock-savings account" << endl;
                                            cout << "4. Loan at 9% for 30 days" << endl;
                                            cout << "5. Check balance" << endl;
                                            cout << "6. Mini statement" << endl;
                                            cout << "7. Back to Mpesa menu" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout << "Enter an option: ";
                                            cin >> option;
                                            switch (option) {
                                                case 1:
                                                    // Send to M-Shwari function
                                                    cout << "Send to M-Shwari selected." << endl;
                                                    break;
                                                case 2:
                                                    // Withdraw from M-shwari function
                                                    cout << "Withdraw from M-Shwari selected." << endl;
                                                    break;
                                                case 3:
                                                    
                                                    cout << "Lock savings account ." << endl;
                                                    do {
                                            cout << "Mpesa - M-Shwari - Lock savings Account" << endl;
                                            cout << "1. Open account" << endl;
                                            cout << "2. save" << endl;
                                            cout << "3. Withdraw" << endl;
                                            cout << "4. Check balance" << endl;
                                            cout << "5. Mini statement" << endl;
                                            cout << "6. Back to Mpesa menu" << endl;
                                            cout << "0. Back to main menu" << endl;
                                            cout << "Enter an option: ";
                                            cin >> option;
                                            switch (option) {
                                                case 1:
                                                    // Open account function
                                                    cout << "Open account selected." << endl;
                                                    break;
                                                case 2:
                                                    // save function
                                                    cout << "save to account selected." << endl;
                                                    break;
                                                case 3:
                                                    // Withdraw function
                                                    cout << "Withdraw from account selected." << endl;
                                                    break;
                                                case 4:
                                                    // Check balance function
                                                    cout << "check balance selected." << endl;
                                                    break;
                                            
                                                case 5:
                                                    // Mini statement function
                                                    cout << "Mini statement selected." << endl;
                                                    break;
                                                case 6:
                                                    // Go back to the Mpesa menu
                                                    break;
                                                case 0:
                                                    // Go back to the main menu
                                                    break;
                                                default:
                                                    cout << "Invalid option entered" << endl;
                                            }
                                        } while (option != 0 && option != 6);
                                        
                                                    break;
                                                case 4:
                                                    // Loan at 9% for 30 days function
                                                    cout << "Loan at 9% for 30 days selected." << endl;
                                                    break;
                                                case 5:
                                                    // Check balance function
                                                    cout << "Check balance selected." << endl;
                                                    break;
                                                case 6:
                                                    // Mini statement function
                                                    cout << "Mini statement selected." << endl;
                                                    break;
                                                case 7:
                                                    // Go back to the Mpesa menu
                                                    break;
                                                case 0:
                                                    // Go back to the main menu
                                                    break;
                                                default:
                                                    cout << "Invalid option entered" << endl;
                                            }
                                        } while (option != 0 && option != 7);
                                        break;  // This break should be outside the innermost do-while loop
                                    case 2:
                                        // KCB M-pesa function
                                        cout << "Withdraw from ATM selected." << endl;
                                        break;
                                    case 3:
                                        // Go back to the Mpesa menu
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option != 3);
                            break;  // This break should be outside the case 4

                        case 5:
                            do {
                                cout << "M-Pesa - Lipa na M-pesa" << endl;
                                cout << "1. Pay Bills" << endl;
                                cout << "2. Buy Goods and Services" << endl;
                                cout << "3. Pochi la biashara" << endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        // pay bill function
                                        cout << "Pay bill selected." << endl;
                                        break;
                                    case 2:
                                        // Buy goods and services function
                                        cout << "Buy goods and services selected." << endl;
                                        break;
                                    case 3:
                                        //pochi la biashara function
                                        cout<<"pochi la biashara selected" << endl;
                                    case 0:
                                        // exit the program
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0);
                            break;
                        case 6:
                            
                            do {
                                cout << "My Account" << endl;
                                cout << "1. Mini statement" << endl;
                                cout << "2. Check balance" << endl;
                                cout << "3. Change M-PESA pin" << endl;
                                cout << "4. Change language" << endl;
                                cout << "5. Update customer menu" << endl;
                                cout << "6. Go back"<< endl;
                                cout << "0. Back to main menu" << endl;
                                cout << "Enter an option: ";
                                cin >> option;
                                switch (option) {
                                    case 1:
                                        // mini statement
                                        cout << "mini statement selected." << endl;
                                        break;
                                    case 2:
                                        // check balance
                                        cout << "check balance selected." << endl;
                                        break;
                                    case 3:
                                        // change mpesa pin
                                        cout << "change mpesa pin selected." << endl;
                                        break;
                                    case 4:
                                        // change language
                                        cout << "change language selected." << endl;
                                        break;
                                    case 5:
                                        // update customer menu
                                        cout << "update customer menu selected." << endl;
                                        break;
                                    case 6:
                                        //Go back 
                                        break;
                                    case 0:
                                        // Go back to the main menu
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0);
                            break;
                                    case 0:
                                        //exit the program
                                        break;
                                    default:
                                        cout << "Invalid option entered" << endl;
                                }
                            } while (option != 0 && option !=6);
                            break;
                                
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option entered" << endl;
        }
    } while (option != 0);

    return 0;
}
