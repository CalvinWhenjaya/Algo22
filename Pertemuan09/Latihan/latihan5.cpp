#include <iostream>
using namespace std;

int main(){

    int a[3] = {10,13,14};
    int b[5] = {1,2,3,4,5};
    int c[10];

    c[2] = a[0] + b[4];

    cout<<"Hasil = "<<c[2]<<endl;

}