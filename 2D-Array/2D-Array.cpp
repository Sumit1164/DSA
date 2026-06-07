#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col){

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
            cout << arr[i][j]<<" ";
    }
    cout << endl;
}

int main(){

    
    // Creating 2D array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Print all the value in array row wise
    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //         cout << arr[row][col] << " ";
    // cout << endl;

    // Print all the value in array col wise, using function call

    // printcol(arr, 3, 4);


    // Find an element in our array

    int x = 132;
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            if(arr[row][col] ==x){
                cout << "Mil gaya element";
                return 0;
            }

    cout << "Nahi mila element";
}