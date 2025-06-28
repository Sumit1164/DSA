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


*/

// 10 10 10 10 10 
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

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