#include<iostream>
using namespace std;

int main()
{
    char arr[5] = {'1', '2', '3', '4'};
    char *ptr = arr;
    // cout << arr << endl; // 1 2 3 4
    // cout << ptr << endl; //1 2 3 4

    cout << (void *)ptr << endl;
    cout << (void *)arr << endl;

    cout << static_cast<void *> (ptr )<< endl;
}