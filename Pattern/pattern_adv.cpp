// *
// * *
// * * *
// * * * * 
// * * * * *



#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;

    }
}


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 



#include<iostream>
using namespace std;
int main(){
    int row, col;
    for (row = 1; row <= 5; row++){
        for (col = 1; col <= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}



// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << i<<" ";
        }
        cout << endl;
        cout<<"Thanks for supports";
    }
}



// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1



#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = i; j >= 1; j--){
            cout << j<<" ";
        }
        cout << endl;
    }
}



// a 
// b b 
// c c c 
// d d d d 
// e e e e e



#include<iostream>
using namespace std;
int main(){
    for (char i = 'a'; i <= 'e'; i++){
        for (char c = 'a'; c <= i; c++){
            cout << i<<" ";
        }
        cout << endl;
    }
}



// * * * * *
// * * * *
// * * *
// * *
// *



#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5-(i-1); j++){
            cout << "*"<<" ";
        }
        cout << endl;
    }
}



// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1



#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 5; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}




// 5 
// 5 4
// 5 4 3 
// 5 4 3 2
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int i, j;
    for (i = 1; i <=5; i++){
        for (j = 5; j >= 5 - i + 1 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
