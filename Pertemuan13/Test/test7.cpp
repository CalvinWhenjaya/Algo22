#include <iostream>
using namespace std;

string kata = "Uvers";

string aa (){
    return kata;
}

int main(){
    cout<<"Ini Dari Fungsi: "<<aa()<<endl;
    cout<<"Ini Tanpa Fungsi: "<<kata<<endl;
    kata = "Calvin";
    cout<<"Ini Dari Fungsi W: "<<aa()<<endl;
    cout<<"Ini Tanpa Fungsi W: "<<kata<<endl;
}