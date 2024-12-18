// 6 by 6 matrix code
#include<iostream>
using namespace std;
int main() {
    int x[6][6];
    for(int i=0;i<36;i++){
        for(int j=0; j<36; j++){
            cout<<"you have to enter 36 numbers :( : ";
            cin>>x[i][j];
        }
    for (int i=0; i<6; i++){
        for(int j=0; j<6; j++){

        
            cout<<x[i][j]<<" ";

    }
    cout<<endl;
    }


    }
   return 0; 
}