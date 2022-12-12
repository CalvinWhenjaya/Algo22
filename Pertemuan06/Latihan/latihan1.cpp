#include <iostream>
using namespace std;

int main(){

    int pil;
    cout<<"Pilihan: ";cin>>pil;

    switch (pil)
    {
    case 1: cout<<"Algoritma"<<endl;
            cout<<"dan"<<endl;
            cout<<"Pemograman"<<endl;
        break;
    case 2: cout<<"Matematika"<<endl;
            cout<<"Diskrit"<<endl;
        break;
    default: cout<<"Bahasa"<<endl;
             cout<<"Inggris"<<endl;
        break;
    }

}