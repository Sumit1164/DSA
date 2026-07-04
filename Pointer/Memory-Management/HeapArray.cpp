#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];

    // values daal raha array mein
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    // delete the heap allocation
    delete []arr;
}