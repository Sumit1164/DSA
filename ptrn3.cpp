#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= 5 - row; col = col + 1){
            cout << "  ";
        }
        for (int col = 1; col<= 2 * row - 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}