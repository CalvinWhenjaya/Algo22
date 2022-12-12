#include <iostream>
using namespace std;

string bonus (int totalbelanja){
    string barangbonus;
    if (totalbelanja < 500000){
        barangbonus = "Kaos Kaki";
    } else if (totalbelanja >= 500000 && totalbelanja <= 1000000){
        barangbonus = "Sarung Tangan";
    } else if (totalbelanja > 1000000 && totalbelanja <= 1500000){
        barangbonus = "Celana";
    } else if (totalbelanja > 1500000 && totalbelanja <= 2000000){
        barangbonus = "Baju";
    } else if (totalbelanja > 2000000 && totalbelanja <= 2500000){
        barangbonus = "Topi";
    } else {
        barangbonus = "Jaket";
    }
    
    return barangbonus;  
}

int main(){
    int nominal;
    cout<<"Masukkan Total Belanja: ";cin>>nominal;
    cout<<"Bonus Anda Adalah: "<<bonus(nominal);
}