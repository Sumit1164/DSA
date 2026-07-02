#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 4, 5, 7};
    // Print the address of first element, There are three ways to print the array index 0 value
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    
    // Using pointer to print the address
    int *ptr = arr; //1way
    int *ptr1 = &arr[0]; // 2 way
    cout << ptr << endl;

    // Print the address of second element, There are three ways to print the array index 1 value
    cout << arr + 1 << endl;


    // Print the value
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;
    
    cout << endl;
    
    // Print all elements addresses
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << endl;
    }

    // Print all the values
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }

}