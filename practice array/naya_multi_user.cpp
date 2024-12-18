#include<iostream>
using namespace std;
int main() {
    int x[3][3];
    for (int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<"Enter the value: ";
            cin>>x[i][j];
        }

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){

        
            cout<<x[i][j]<<" ";

    }
    cout<<endl;
} 
    // cout<<x[0][0]<< " ";
    // cout<<x[0][1]<< endl;
    // cout<<x[1][0]<< " ";
    // cout<<x[1][1]<< endl;

    }
   return 0; 
}