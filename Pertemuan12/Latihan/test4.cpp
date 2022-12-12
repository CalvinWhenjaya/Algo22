#include <iostream>
using namespace std;

void garis (){
    cout<<"----------------"<<endl;
}

void namaku (string nama, int umur){
    cout<<"Nama Saya: "<<nama<<endl;
    cout<<"Umur Saya: "<<umur<<endl;
}

int main(){
    string kata;
    int umur = 20;
    kata = "Uvers Keren";

    garis(); namaku(kata, umur); garis();
}