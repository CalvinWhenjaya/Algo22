#include <iostream>
using namespace std;

int tambah (int a, int b){
    return a+b;
}

double tambah (string a, string b){
    return a+b;
}

int main(){
    cout<<tambah(2,3);
    cout<<tambah("aa","ab");
}