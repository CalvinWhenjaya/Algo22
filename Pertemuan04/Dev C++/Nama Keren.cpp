#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string nama;
	
	cout<<"Ucapan Selamat"<<endl;
	cout<<"--------------"<<endl;
	
	cout<<"Masukkan Nama Anda= ";
	getline(cin,nama);
	cout<<"Selamat "<<nama<<" Anda Keren";
	
	return 0;
}
