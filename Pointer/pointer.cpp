#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout <<"Without using pointer, the address of a is: "<< &a << endl;

    // using pointer to find the address
    int *ptr = &a;
    cout << "Using pointer, the address of a is: " << ptr << endl;
    cout << "Size of pointer: " << sizeof(ptr)<<endl;
    string s = "S";
    string *ptr1 = &s;
    cout << "The address of s is: " << ptr1 << endl;

    //

    int x = 12;
    // print the address of a
    int *ptrX = &x;
    cout << "Address of X: " << ptrX << endl;

    cout << "The value of X print by using pointer: " << *ptrX << endl;
    int y = 57;
    ptrX = &y;
    cout << "The address of Y: " << ptrX << endl;
    cout << "The value of Y print by using pointer: " << *ptrX << endl;
}