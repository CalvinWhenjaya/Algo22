#include <iostream>
using namespace std;

int binarysearch (int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r-l) / 2;

        if (arr[mid] == x)

        if (arr[mid] > x)

        return binarysearch(arr, l, mid-l, x);
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,10,40};
    int x = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result= binarysearch(arr, 0, n-1, x);
    (result == -1) ? cout<<"Element is not present in array"
                   : cout<<"Element is present at index "<<result;
                   return 0;
}