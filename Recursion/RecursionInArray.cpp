#include<iostream>
using namespace std;

// 1st way to print array
// void print(int arr[], int index, int n)
// {
//     if(index ==n)
//         return;
//     cout << arr[index] << " ";
//     print(arr, index + 1, n);
// }




// 2nd way to print array
// void x(int arr[], int index)
// {
//     cout << arr[index] << " ";
// }





//  Print array in reverse order 
void print(int arr[], int index, int n)
{
    if(index ==n)
        return;

    print(arr, index + 1, n);
    cout << arr[index] << " ";
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    print(arr, 0, 5);


    // 2nd way to print array
    // for (int i = 0; i < 5; i++)
    //     x(arr, i);
}