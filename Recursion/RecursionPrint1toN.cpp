#include<iostream>
using namespace std;

void print(int x, int n)
{
    if(n == x){
        cout << n;
        return;
    }
    cout << n << endl;
    print(1, x);
}
int main()
{
    int n = 10;
    print(1, n);
}