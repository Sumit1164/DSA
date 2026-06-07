#include<iostream>
using namespace std;

void Rotate90(int matrix[][4]){
    int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        } 
    }
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while(start<end){
                swap(matrix[start][i], matrix[end][i]);
                start++;
                end--;
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main(){
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    k = k % 4;
    while (k)
    {
        Rotate90(arr);
        k--;
    }
    
}