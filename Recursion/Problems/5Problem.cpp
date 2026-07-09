// Print all numbers from 10 to n using recursion, where n will be greater than 10.

#include<iostream>
using namespace std;

void print(int num, int n)
{
    if(num > n)
        return;
    cout << num << endl;
    print(num + 1, n);
}
int main()
{
    int n = 20;
    int num = 10;

    print(num, n);
}