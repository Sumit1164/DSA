/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i<= 5; i++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

}




10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10

#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 5; j++){
            cout << "10 ";
        }
        cout << endl;
    }
}



1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

#include <iostream>
    using namespace std;
    int main(){
        for (int i = 1; i <= 5; i++){
            for (int j = 1; j <= 5; j++){
                cout << i << " ";
            }
            cout<< endl;
        }
    }



1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++){  //row
        for (int j = 1; j<= 5; j++)  // column
        {
            cout <<j<<" " ;
        }
        cout << endl;
    }
}



5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    for (int i =1; i<= 5; i++)
    {
        for (int j = 5; j>= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

}



1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25


#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5; j++){
            cout << j * j << " ";
        }
        cout << endl;
    }
}



a a a a a
b b b b b
c c c c c
d d d d d
e e e e e


#include<iostream>
using namespace std;
int main(){
    int i, j;
    char k;
    for (i = 1; i <= 5; i++){
        k = 'a'+ (i - 1);
        for (j=1; j <= 5 ; j++){
            cout << k << " ";
        }
        cout << endl;
    }
}



a b c d e
a b c d e
a b c d e
a b c d e
a b c d e



#include<iostream>
using namespace std;
int main(){
    int i;
    char j;
    for (i = 1; i <= 5; i++){
        for (j = 'a'; j <= 'e'; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}



// print ASCII Value of A B C D E
A  B  C   D   E
97 98 99 100 101
97 98 99 100 101
97 98 99 100 101
97 98 99 100 101
97 98 99 100 101

#include<iostream>
    using namespace std;
int main(){
    int row, col;
    for (row = 1; row <= 5; row++){
        char name = 'a';
        for (col = 1; col <= 5; col++){
            cout << name + col - 1<<" ";
        }
        cout << endl;
    }
}




1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include<iostream>
using namespace std;
int main(){
    int i, j, count = 1;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5; j++){
            cout << count<<" ";
            count++;
        }
        cout << endl;
    }
}
