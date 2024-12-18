#include<iostream>
using namespace std;

class bankacc{
    private:
    string accHolderName;
    int accNumber;
    double balance;

    public:
    bankacc(string name, int number, double initialbalance){
        accHolderName = name;
        accNumber = number;
        balance = initialbalance;
    }
    void credit(double amount){
        if (amount>0){
            balance += amount;
            cout<<"Amount credited: "<<amount<< ". New balance: "<<balance<<endl;
        } else{
            cout<<"Invalid amount. Please enter a positive value. \n";
        }
    }
    void debit(double amount){
        if (amount>0 && amount<= balance){
            balance -= amount;
            cout<< " Amount debited: "<< amount<<". New balance: "<< balance<< endl;
        } else {
            cout<<"Insufficient funds or invalid amount. \n";
        }
    }
    void displayAccountDetails() const{
        cout<<"Account Holder: "<< accHolderName
            <<"\nAccount Number: "<<accNumber
            <<"\nCurrent Balance: "<<balance<<endl;
    }
};
int main() {
    bankacc myAccount("John", 12345,500.0);

    cout<<"Initial acc details:\n";
    myAccount.displayAccountDetails();

    cout<<"\nPeforming operations:\n";
    myAccount.credit(200.0);
    myAccount.debit(100.0);
    myAccount.debit(700.0);

    cout<<"\nFinal account details:\n";
    myAccount.displayAccountDetails();
   return 0; 
}