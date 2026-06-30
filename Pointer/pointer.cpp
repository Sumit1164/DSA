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
    cout << "The address of s is: " << ptr1;

    // 
}