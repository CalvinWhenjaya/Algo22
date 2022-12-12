#include <iostream>
using namespace std;

int main(){

    int u;
    char lagi;
    atas:
    cout<<"Masukkan Umur: ";
    cin>>u;

    cout<<"Umur Anda Adalah: "<<u<<endl;
    cout<<"Ulang Lagi (y/t): ";
    cin>>lagi;

    if(lagi == 'y'){
        goto atas;
    }

}