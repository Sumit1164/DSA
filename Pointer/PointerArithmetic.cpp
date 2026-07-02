#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3, 5, 7, 12, 57};

    int *ptr = arr;
    
    // // print all the value
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ptr[i] << "  ";
    // }
    // cout << endl;

    // // Print all the addresses
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ptr + i << endl;
    // }

    // // Arithmetic operation ptr++; ptr--; ptr = ptr+1;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptr << " ";
    //     ptr++;
    // }


    // For ptr--;
    // int n = sizeof arr / sizeof arr[0] -1;

    // int *ptr2 = arr+n;
    // for (int i = n; i>=0; i--)
    // {
    //     cout << *ptr2 << " ";
    //     ptr2--;
    // }

    ptr = ptr + 3;
    cout << *ptr << endl;

    ptr = ptr - 2;
    cout << *ptr << endl;
}