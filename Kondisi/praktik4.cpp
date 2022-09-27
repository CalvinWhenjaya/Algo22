#include <iostream>
using namespace std;

int main(){

    int total_belanja;
    char member;

    cout<<"Masukkan Total Belanja = ";cin>>total_belanja;
    cout<<"Apakah Anda Member ? (y/t) = ";cin>>member;
    
    if(total_belanja > 1000000)
    { if(member == 'y' || 'Y')
        {   cout<<"Potongan 35000"<<endl;   }
        else
        {   cout<<"Potongan 20000"<<endl;   }
    }
    { if(member == 't')
        {   cout<<"Potongan 0"<<endl;   }
        else
        {   cout<<"Potongan 0"<<endl;   }
    }

return 0;

}