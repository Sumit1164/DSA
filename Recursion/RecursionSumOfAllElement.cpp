#include<iostream>
using namespace std;

// Using iterative approach to print the sum of element

int print(int arr[], int indx)
{
    return arr[indx];
}

int main()
{
    int arr[] = {3, 4, 5, 8, 2};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += print(arr, i);
    }
    cout << sum << " ";
}