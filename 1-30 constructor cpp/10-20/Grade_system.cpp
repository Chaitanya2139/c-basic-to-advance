#include <iostream>
using namespace std;

class GradeSystem {
private:
    float mark; // Variable to store the mark

public:
    // Constructor to initialize and calculate grade
    GradeSystem() {
        cout << "Enter Marks: ";
        cin >> mark;
        calculateGrade(); // Call method to calculate grade
    }

    // Method to determine and display the grade based on marks
    void calculateGrade() {
        if (mark < 0 || mark > 100) {
            cout << "Invalid Marks! Please enter a value between 0 and 100." << endl;
        } 
        else if (mark >= 0 && mark < 35) {
            cout << "Fail Bro!" << endl;
        } 
        else if (mark >= 35 && mark < 50) {
            cout << "Grade: C" << endl;
        } 
        else if (mark >= 50 && mark < 60) {
            cout << "Grade: B" << endl;
        } 
        else if (mark >= 60 && mark < 70) {
            cout << "Grade: B+" << endl;
        } 
        else if (mark >= 70 && mark < 80) {
            cout << "Grade: A" << endl;
        } 
        else if (mark >= 80 && mark <= 100) {
            cout << "Grade: A+" << endl;
        }
    }

    // Destructor to print a message when the object is destroyed
    ~GradeSystem() {
        cout << "Grade calculation completed." << endl;
    }
};

int main() {
    // Create an object of GradeSystem, which will automatically take input and calculate grade
    GradeSystem grader;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
