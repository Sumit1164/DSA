#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 7, 12, 57};
    int *ptr = arr;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;
    cout << *(ptr + 5) << endl; // This is not right way to access the out of range values
}