#include<iostream>
using namespace std;
 
void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The swap value of " << a << " and value of " << b;
    return;
}

int main(){
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    swap(a, b);
    cout << endl;
    cout << a << "   " << b << endl;
}