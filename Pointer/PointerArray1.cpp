#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3, 5, 7, 12, 57};

    int *ptr = &arr[0]; // for address
    // int *ptr = arr; // for values

    for (int i = 0; i < 5; i++)
    {
        cout << ptr + i << endl; // for addresses
        // cout << *(ptr + i) << endl;   // for values
        // cout << ptr [i] << endl;   // for values
    }
    
}