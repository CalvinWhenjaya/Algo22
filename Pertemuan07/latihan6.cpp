#include <iostream>
using namespace std;

int main(){

    char cobalagi;
    int pilihan, fahrenheit, celcius;

     do
    {
    cout<<"Pilih Konversi Suhu (1 atau 2): ";cin>>pilihan;
    cout<<"----------------------------------"<<endl;

    switch (pilihan)
    {
    case 1: cout<<"Masukkan Suhu Fahrenheit: ";cin>>fahrenheit;
            celcius = (fahrenheit - 32) * 5 / 9;
            cout<<"Dalam Suhu Celcius Adalah "<<celcius<<"°"<<endl;
        break;

    case 2: cout<<"Masukkan Suhu Celcius: ";cin>>celcius;
            fahrenheit = (celcius * 9 / 5) + 32;
            cout<<"Dalam Suhu Fahrenheit Adalah "<<fahrenheit<<"°"<<endl;
        break;
    
    default: cout<<"Pilih 1 atau 2 Saja"<<endl;
        break;
    }
        cout<<endl<<"Coba Lagi (Y/T) ? ";cin>>cobalagi;
    } 
    while (cobalagi == 'y' || cobalagi == 'Y');

    return 0;

}