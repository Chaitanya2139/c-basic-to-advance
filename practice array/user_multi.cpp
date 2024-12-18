#include<iostream>
using namespace std;
int main() {
    int x[2][2];
    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter the value: ";
            cin>>x[i][j];
        }

//     for (int i=0; i<2; i++){
//         for(int j=0; j<2; j++){

        
//             cout<<x[i][j]<<" ";

//     }
//     cout<<endl;
// } 
    cout<<x[0][0]<< " ";
    cout<<x[0][1]<< endl;
    cout<<x[1][0]<< " ";
    cout<<x[1][1]<< endl;

    }
   return 0; 
}