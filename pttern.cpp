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
*/

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