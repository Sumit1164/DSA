#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}