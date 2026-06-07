#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // Create 2D Vector
    vector<vector<int>> matrix(3,vector<int>(4,1));

    // Print the whole matrix elements
    // for (int i = 0; i < 3; i++)
    // for (int j = 0; j < 4; j++)
    // cout << matrix[i] [j]<< " ";


    // Find how many row in matrix
    int row = matrix.size();
    int col = matrix[0].size();

    cout <<"Rows: "<<row<<endl;
    cout << "Column: " << col << endl;
}