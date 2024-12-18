/*Create Banking system.
Requirements:
  1.ask user information(user name,Bank account)
  2.perform credit process.
  3.perform Deposite Process

(balance need to manage by credit and debit )

Kindly note:use concept of inheritance in c++*/

#include <iostream>
#include <string>
using namespace std;

// Base class for user information
class User {
protected:
    string userName;
    int accountNumber;

public:
    void setUserInfo() {
        cout << "Enter your name: ";
        cin >> userName;
        cout << "Enter your account number: ";
        cin >> accountNumber;
    }

    void displayUserInfo() const {
        cout << "User Name: " << userName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

// Derived class for Banking operations
class BankingSystem : public User {
private:
    double balance;

public:
    BankingSystem() : balance(0) {}

    void credit(double amount) {
        if (amount <= 0) {
            cout << "Invalid credit amount!" << endl;
        } else {
            balance += amount;
            cout << "Successfully credited: $" << amount << endl;
        }
    }

    void debit(double amount) {
        if (amount <= 0) {
            cout << "Invalid debit amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully debited: $" << amount << endl;
        }
    }

    void showBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankingSystem user;

    // Get user information
    user.setUserInfo();

    // Perform banking operations
    int choice;
    double amount;

    do {
        cout << "\nBanking Menu:" << endl;
        cout << "1. Credit" << endl;
        cout << "2. Debit" << endl;
        cout << "3. Show Balance" << endl;
        cout << "4. Display User Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        // Validate input
        if (cin.fail()) {
            cin.clear();                // Clear error flag
            cin.ignore(10000, '\n');    // Discard invalid input
            cout << "Invalid input. Please enter a number from 1 to 5." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to credit: ";
                cin >> amount;

                // Validate amount input
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Invalid amount! Please enter a valid number." << endl;
                } else {
                    user.credit(amount);
                }
                break;

            case 2:
                cout << "Enter amount to debit: ";
                cin >> amount;

                // Validate amount input
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Invalid amount! Please enter a valid number." << endl;
                } else {
                    user.debit(amount);
                }
                break;

            case 3:
                user.showBalance();
                break;

            case 4:
                user.displayUserInfo();
                break;

            case 5:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number from 1 to 5." << endl;
        }
    } while (choice != 5);

    return 0;
}
