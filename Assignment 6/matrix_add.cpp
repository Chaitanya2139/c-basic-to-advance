#include<iostream>
using namespace std;
int main() {
    int x[2][2], y[2][2], result[2][2];
    
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter the value for x: ";
            cin>>x[i][j];
        }
        
    for (int i=0; i<2; i++){
        for(int j=0; j <2; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    }

    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Enter the value for y: ";
            cin>>y[i][j];
        }
    for (int i=0; i<2; i++){
        for(int j=0; j <2; j++){
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }
    }



    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            result[i][j]=x[i][j]+ y[i][j];
             
    }
    for (int i=0; i<2; i++){
        for(int j=0; j <2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
   return 0; 
}