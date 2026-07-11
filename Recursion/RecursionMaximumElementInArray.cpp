#include<iostream>
using namespace std;

// using recursive approach to find Maximum Element In Array.
int maxu(int arr[], int index, int n)
{
    if(index == n)
    {
        return arr[index];
    }

    return max(arr[index], maxu(arr, index + 1, n));
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    cout<< maxu(arr, 0, 4);
}