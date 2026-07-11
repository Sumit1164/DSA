#include <iostream>
using namespace std;

// Using recursive approach to print the sum of element

int print(int arr[], int indx, int n)
{
    if(indx == n)
    return 0;

    return arr[indx]+ print(arr, indx + 1, n);
}





int main()
{
    int arr[] = {3, 4, 5, 8, 2};
    cout << print(arr, 0, 5);
}

