#include <iostream>
using namespace std;

class DayToName {
public:
    int dayNum;

    // Constructor to initialize the object and input the day number
    DayToName() {
        cout << "Enter day number (1-7): ";
        cin >> dayNum;

        // Display the corresponding day name
        displayDayName();
    }

    // Method to display the name of the day
    void displayDayName() {
        switch (dayNum) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
        }
    }

    // Destructor to notify the end of the program
    ~DayToName() {
        cout << "The DayToName object is being destroyed." << endl;
    }
};

int main() {
    // Create an object of DayToName, which will automatically invoke the constructor
    DayToName dayConverter;

    // Destructor will be called when the object goes out of scope (end of main)
    return 0;
}
