#include<iostream>
using namespace std;

// bool linearSearch(int arrr[], int index, int x, int n)
// {
//     if(index ==n)
//         return 0;
//     if(arrr[index] == x)
//         return 1;
//     return linearSearch(arrr, index + 1, x, n);
// }

int linearSearch(int arrr[], int index, int x, int n)
{
    if (index == n)
        return 0;
    if (arrr[index] == x)
        return index;
    return linearSearch(arrr, index + 1, x, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int find = 5;
    cout<< linearSearch(arr, 0, find, 7);
}