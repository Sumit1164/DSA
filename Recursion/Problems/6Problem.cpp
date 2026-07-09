// Write a Table program using recursion. Take input number n, and print its table.

#include<iostream>
using namespace std;

void table(int n, int x)
{
    if(x==11)
        return;
    cout << n * x<<endl;
    table(n, x +1);
}

int main()
{
    int n = 5;
    int a = 1;
    table(n, a);
}