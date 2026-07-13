#include<iostream>
using namespace std;

bool binarysearch(int arr[], int start, int x, int end)
{
    if (start > end)
        return 0;
    int mid = start + (end - start) / 2;

    if(arr[mid] ==x)
        return 1;
    else if (arr[mid]<x)
        return binarysearch(arr, mid + 1, x, end);
    else
        return binarysearch(arr, start, x, mid - 1);
}

int main()
{
    int arr[] = {2, 5, 6, 8, 9, 12};
    int x = 8;
    cout << binarysearch(arr, 0, x, 5);
}