#include <iostream>
using namespace std;

string bonus (int totalbelanja){
    string barangbonus;
    if (totalbelanja < 500000)
    {
        barangbonus = "Topi";
    } else if (totalbelanja >= 500000 && totalbelanja <= 1000000)
    {
        barangbonus = "Baju";
    } else {
        barangbonus = "Celana";
    }
    return barangbonus;  
}

int main(){
    int nominal;
    cout<<"Masukkan Total Belanja: ";cin>>nominal;
    cout<<"Bonus Anda Adalah: "<<bonus(nominal);
}