#include<iostream>
using namespace std;

// using recursive approach to find Minimum Element In Array.
int minu(int arr[], int index, int n)
{
    if(index ==n)
    {
        return arr[index];
    }

    return min(arr[index], minu(arr, index + 1, n));
}

int main()
{
    int arr[] = {5, 2, 4, 6, 7};
    cout<< minu(arr, 0, 5);
}