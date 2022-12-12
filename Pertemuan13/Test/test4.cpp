#include <iostream>
using namespace std;

float kali (float a, float b){
    return a * b;
}

float luassegitiga (float alas, float tinggi){
    return kali (alas,tinggi) / 2;
}

int main(){
    cout<<luassegitiga(5.0,10.5);
}