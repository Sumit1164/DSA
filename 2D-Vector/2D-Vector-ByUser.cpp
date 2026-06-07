#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printVector(vector<vector<int>>arr, int x, int y){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main(){
    int n, m;
    cout << "Enter the length of row: ";
    cin >> n;
    cout << "Enter the length of column: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // USing loop to insert the value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
        
    }

    printVector(matrix, n, m);
}