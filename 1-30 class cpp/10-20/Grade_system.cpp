#include <iostream>
using namespace std;

class GradeSystem {
public:
    // Method to determine and display the grade based on marks
    void calculateGrade() {
        float mark;
        cout << "Enter Marks: ";
        cin >> mark;

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
};

int main() {
    // Create an object of GradeSystem
    GradeSystem grader;

    // Call the calculateGrade method
    grader.calculateGrade();

    return 0;
}
