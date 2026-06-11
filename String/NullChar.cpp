#include<iostream>
using namespace std;

int main(){
    char arr[10];
    cout << "Enter your name: ";
    cin >> arr;
    arr[5] = '\0'; //after 5 characters end the printing. -> \0 means null character it break the characters printing.
    cout << arr;
}