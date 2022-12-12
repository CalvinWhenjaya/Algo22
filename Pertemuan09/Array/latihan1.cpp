#include <iostream>
using namespace std;

 int main(){

    const int A[3][4] = {{3,4,8,0},{3,9,2,1},{6,3,0,2}};

    for (int b=0; b<3; b++){
        for (int c=0; c<4; c++){
            cout<<A[b][c]<<" ";
        }
        cout<<endl;
    }

 }