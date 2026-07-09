// Print all odd numbers from 1 to n using recursion.

#include<iostream>
using namespace std;

void odd(int n, int num)
{
    if(num >n)
        return;
    cout << num<< endl;
    odd(n, num+2);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;
    odd(n, num);
}