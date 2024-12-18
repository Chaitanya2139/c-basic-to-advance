/*2. Write a C++ program to define a class Student with the following:
Private data members: name and age. A parameterized constructor to initialize the name and age.
A copy constructor to create a copy of an existing Student object.
A member function display() to print the details of the student.
In the main() function, create an object of the Student class using the
parameterized constructor and another object using the copy constructor. Display
the details of both students.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;
    cout << "Enter the name: ";
    getline(cin, name);
    cout << "Enter the age : ";
    cin >> age;

    Student student1(name, age);

    Student student2 = student1;

    cout << "\nThe name and age of Student 1:" << endl;
    student1.display();

    cout << "The name and age of Student 2 (copy):" << endl;
    student2.display();

    return 0;
}
