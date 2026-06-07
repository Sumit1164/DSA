#include <iostream>
using namespace std;

void waveX(int arr[][4], int row, int col){
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
            // cout << endl;
        }
        else
        {
            for (int i = row-1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    // int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrx[4][4] = {3,6,4,2,7,8,11,5,9,3,2,1,17,12,5,9};

    // for (int j = 0; j < 3; j++)
    // {
    //     if (j % 2 == 0)
    //     {
    //         for (int i = 0; i < 3; i++)
    //         {
    //             cout << arr1[i][j] << " ";
    //         }
    //         // cout << endl;
    //     }
    //     else
    //     {
    //         for (int i = 2; i >= 0; i--)
    //         {
    //             cout << arr1[i][j] << " ";
    //         }
    //     }
    // }

    waveX(arrx, 4, 4);
}