// 2D array
#include <iostream>
using namespace std;

int main()
{
    // Array create karna hai jo address store karega
    int n, m; // n = row    | m = column
    cout << "Enter the length of row: ";
    cin >> n;
    cout << "Enter the length of column: ";
    cin >> m;
    int **ptr = new int *[n];

    cout << "----------------------------------------------------------------------------------------------------" << endl;

    // Created 2D array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }

    // Insert values in 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }

    cout << "----------------------------------------------------------------------------------------------------" << endl;

    // Print the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Release the memory from the Heap
    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}