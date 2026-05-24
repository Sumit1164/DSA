// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {7, 4, 8, 5, 3};
//     int i, j;
//     for (j = 0; j<5; j++)
//     {
//         bool swapped = 0;
//         for (i=0; i<5-1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//                 swap(arr[i], arr[i + 1]);
//             swapped = 1;
//         }
//         if (swapped == 0)
//             break;
//     }
//     for ( i = 0; i < 5; i++)
//         cout << arr[i] << " ";  
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 4, 8, 5, 3};
    int i, j;
    for (j = 0; j < 5; j++)
    {
        bool swapped = 0;
        for (i = 0; i < 5 - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";
}