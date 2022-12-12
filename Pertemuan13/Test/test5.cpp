#include <iostream>
using namespace std;

int tambah (int a, int b){
    return a+b;
}

int tambah (int a, int b, int c){
    return a+b;
}

int main(){
    cout<<tambah(2,3);
    cout<<tambah(2,3,5);
}