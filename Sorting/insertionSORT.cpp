// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {7, 4, 6, 5, 0};
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = i; j > 0; j--){
//             if (arr[j] < arr[j-1])
//                 swap(arr[j], arr[j - 1]);
//             else
//                 break;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }



// Descending Order

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {3, 1, 2, 4, 5};
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             if (arr[j] > arr[j - 1])
//                 swap(arr[j], arr[j - 1]);
//             else
//                 break;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }





// Using Insertion sort to sort given array into ascending order but loop start from last element.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7, 5, 2, 4, 3};
    for (int i = 4; i >0; i--)
    {
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}