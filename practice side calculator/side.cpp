#include <iostream>
using namespace std;

class square
{
    public:
    int side;

    void sqr(){
        cout<<"Enter the side of the square: ";
        cin>>side;
    }
};

class rectangle
{
    public:
    int length;
    int breadth;

    void rect(){
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of the rectangl: ";
        cin>>breadth;
    }
};

class circle
{
    public:
    int radius;

    void crcl(){
        cout<<"Enter the radius of the circle: ";
        cin>> radius;
    }
};

class Area: public square,public rectangle,public circle
{
    public:
    double area;

    
    void areaofsqr(){
        sqr();
        area=side*side;
        cout<<"The area of square of side "<<side<<" is: "<<area;
    }

    void areaofrect(){
        rect();
        area=length*breadth;
        cout<<"The area of rectangle of length: "<<length<<" and breadth: "<<breadth<<" is: "<<area;
    }

    void areaofcrcl(){
        crcl();
        area=3.14*radius*radius;
        cout<<"The area of circle of radius: "<<radius<<" is: "<<area;
    }
};

int main(){
    int choice;
    Area ar;
    do 
    {
        cout << "\nArea Calculator:\n";
        cout << "1. Sqaure.\n";
        cout << "2. Rectangle.\n";
        cout << "3. Circle.\n";
        cout << "4. Exit.\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            ar.areaofsqr();
            break;
        case 2:
            ar.areaofrect();
            break;
        case 3:
            ar.areaofcrcl();
            break;
        case 4:
            cout << "Thank you! Come Again" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}
