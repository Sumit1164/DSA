#include<iostream>
using namespace std;

int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {3, 5, 7, 9, 11, 13, 15, 17, 19};
    int add[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
    cout << add[i][j] << " ";
}