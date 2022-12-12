#include <iostream>
using namespace std;

int main(){

    char jawab;
    int angka;

    do
    {
        cout<<"Masukkan Angka: ";
        cin>>angka;
        cout<<"Angka "<<angka<<" Adalah ";
        cout<<( (angka % 2 == 1) ? "Ganjil" : "Genap");
        cout<<endl<<"Coba Lagi (Y/T) ? "; cin>>jawab;
    }
    while (jawab == 'y' || jawab == 'Y');

    return 0;   

}
