#include <iostream>
using namespace std;

class DayToName {
public:
    // Method to display the name of the day
    void displayDayName() {
        int dayNum;
        cout << "Enter day number (1-7): ";
        cin >> dayNum;

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
};

int main() {
    // Create an object of DayToName
    DayToName dayConverter;

    // Call the displayDayName method
    dayConverter.displayDayName();

    return 0;
}
