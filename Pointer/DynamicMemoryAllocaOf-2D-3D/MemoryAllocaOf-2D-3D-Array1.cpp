// 3D array
#include<iostream>
using namespace std;
int main()
{
    int L, B, H;
    cout << "Enter the L, B and H : ";
    cin >> L >> B >> H;

    cout << "---------" << endl;
    int ***ptr = new int**[L];
    // Create 2D array and store it's address in ptr
    for (int i = 0; i < L; i++)
    {
        ptr[i] = new int*[B];

        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << ptr[i][j][k] << " ";
            }

            cout << endl;
        }
    }

    // Release the memory from the Heap
    for (int i = 0; i < L; i++)
    {
        delete[] ptr[i];
        for (int j = 0; j < B; j++)
        {
            delete[] ptr[i][j];
        }
    }
    delete[] ptr;
}