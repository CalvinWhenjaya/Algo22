#include <iostream>
using namespace std;

int main(){

    int i=0;

    do  {
        cout<<i<<" ";i++;
    } while (i<7);

    cout<<endl<<"----------------------"<<endl;
    int a=1;
     while (a<=10)
    {
        if(a%2==0){
            break;
        }
    cout<<a<<" ";a=a+2;
    }

    return 0;
    
}