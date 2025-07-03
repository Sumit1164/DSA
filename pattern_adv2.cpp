//             *
//          *  *
//       *  *  *
//    *  *  *  *
// *  *  *  *  * 


/*

#include<iostream>
using namespace std;
int main(){
    int row, col;
    for (row = 1; row <= 5; row++){
        for (col = 1; col <= 5-row; col++)
            cout <<"  ";
        for (col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}
*/


//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5 - i; j++){
            cout << "  ";
        }
        for (j = 1; j <= i; j++){
            cout << i<<" ";
        }
        cout << endl;
    }
}