#include <iostream>
using namespace std;

int main(){

    float fahrenheit, celcius;

    cout<<"Masukkan Suhu Fahrenheit: ";cin>>fahrenheit;

    cout<<"-----------------------------"<<endl;

    celcius = (fahrenheit - 32) * 5 / 9;

    cout<<"Dalam Suhu Celcius Adalah "<<celcius<<"°"<<endl;

}