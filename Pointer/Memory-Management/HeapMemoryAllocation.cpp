#include<iostream>
using namespace std;

int main()
{
    // variable ke liye heap memory allocate karo
    int *ptr = new int;
    *ptr = 5; //Value assign kara 
    // cout << ptr; //address print hoga ptr ka
    cout << *ptr << endl;

    float *fptr = new float;
    *fptr = 5.593;
    cout << *fptr << endl;

    // delete the heap allocation
    delete ptr;
    delete fptr;
}