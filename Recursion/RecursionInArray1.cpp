#include<iostream>
using namespace std;

//  Print array in reverse order and the index point last value of array
void print(int arr[], int index)
{
    if (index ==-1)
        return;

    cout << arr[index] << " ";
    print(arr, index - 1);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    print(arr, 4);
}