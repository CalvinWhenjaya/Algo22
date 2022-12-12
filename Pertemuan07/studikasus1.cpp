#include <iostream>
using namespace std;

int main(){

    for (int a=11; a<=29; a+=2){
        if (a==21 || a==27){
            continue;
        }   
        cout<<a<<" ";
    }

}