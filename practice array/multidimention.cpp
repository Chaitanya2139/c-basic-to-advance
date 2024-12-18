#include<iostream>
using namespace std;
int main() {
    int test[2][2]= {
        {2,3},
        {9,0}
    };
// cout<<test[0][0]<<" | ";
// cout<<test[0][1]<<endl;
// cout<<"-----"<<endl;
// cout<<test[1][0]<<" | ";
// cout<<test[1][1];

for (int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        
        cout<<test[i][j]<<" ";

    }
    cout<<endl;
}


   return 0; 
}