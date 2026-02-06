#include<iostream>
using namespace std;
int main(){
    /*
    int i, j, n;
    cout << "Enter the length: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= n-i; j++)
            cout <<"  ";
        for (int j = 1; j<=i; j++)
        {
                cout <<"* ";
        }
        cout << endl;

    }
        */

    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= 5 - row; col++){
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << row<< " ";
        }
        cout << endl;
    }

    return 0;
}