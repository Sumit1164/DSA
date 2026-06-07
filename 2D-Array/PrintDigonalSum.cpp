#include<iostream>
using namespace std;

void printSumDig(int arr[3][3], int i, int j){

    int first = 0, second = 0;
    for (int i = 0; i < 3; i++)
    {
        first += arr[i][i];
    }
    cout << first << " ";

    cout << endl;

    // second digonal
    i = 0, j = 2;
    while(j>=0){
        second += arr[i][j];
        i++, j--;
    }
    cout << second << " ";
}


int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printSumDig(arr, 3, 3);
}