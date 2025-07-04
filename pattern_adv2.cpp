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



//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Eneter a number: ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for (j = 1; j <= i; j++){
            cout << j<<" ";
        }
        cout << endl;
    }
}

*/


//         A
//       A B
//     A B C
//   A B C D 
// A B C D E
#include<iostream>
using namespace std;
int main(){
    int i, c;
    for (i = 1; i <= 5; i++){
        for (c = 1; c <= 5 - i; c++){
            cout << "  ";
        }
        for (char ac = 'A'; ac <= 'A'+i-1; ac++){
            cout << ac<<" ";
        }
        cout << endl;
    }
}