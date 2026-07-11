#include <iostream>
using namespace std;

// Using recursive approach to print the sum of element

// int print(int arr[], int indx, int n)
// {
//     if(indx == n)
//     return 0;

//     return arr[indx]+ print(arr, indx + 1, n);
// }

//  Sum of all element of array and the index point last value of array "2".

int sum(int arr[], int index)
{
    if(index == -1)
    {
        return 0;
    }

    return arr[index] + sum(arr, index - 1);
}

int main()
{
    int arr[] = {3, 4, 5, 8, 2};
    // cout << print(arr, 0, 5);
    cout<<sum(arr, 4);
}