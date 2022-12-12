#include <iostream>
using namespace std;

int main(){

    char jawab;
    int angka1, angka2, total;

    do
    {
        cout<<"Masukkan Angka Pertama: ";cin>>angka1;
        cout<<"Masukkan Angka Kedua: ";cin>>angka2;
        total=angka1+angka2;
        cout<<"Hasil Penjumlahan: "<<total<<endl;
        cout<<endl<<"Coba Lagi (Y/T) ? "; cin>>jawab;
    }
    while (jawab == 'y' || jawab == 'Y');

    return 0;   

}