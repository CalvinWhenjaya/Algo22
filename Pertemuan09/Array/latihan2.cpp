#include <iostream>
using namespace std;

int main(){

    int A[3][4] = {{3,4,8,0},{3,9,2,1},{6,3,0,2}};
    int B[3][4] = {{4,2,3,7},{2,7,9,5},{3,7,5,9}};
    int hasil[3][4];
    int x,y;

    cout<<"PENJUMLAHAN 2 BUAH MATRIKS 3 X 4"<<endl;
    cout<<endl;

    cout<<"=== Matriks A ==="<<endl;
    for (int x=0; x<3; x++){
        for (int y=0; y<4; y++){
            cout<<A[x][y]<<" ";
        }
        cout<<endl;
    } cout<<endl;

    cout<<"=== Matriks B ==="<<endl;
    for (int x=0; x<3; x++){
        for (int y=0; y<4; y++){
            cout<<B[x][y]<<" ";
        }
        cout<<endl;
    } cout<<endl;

    cout<<"=== Hasil A + B ==="<<endl;
    for (int x=0; x<3; x++){
        for (int y=0; y<4; y++){
            hasil[x][y] = A[x][y] + B[x][y];
        }
    }

   for (int x=0; x<3; x++){
        for (int y=0; y<4; y++){
            cout<<" "<<hasil[x][y]<<"  ";
        }
        cout<<endl;
   }

   return 0;
    
}