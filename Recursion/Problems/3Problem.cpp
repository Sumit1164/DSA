#include<iostream>
using namespace std;

void print(int z, int x)
{
    if(z == x){
        cout << z << endl;
        return;
    }
    cout << z << endl;
    print(z +1, x);
} 

int main()
{
    int n = 10;
    print(1, n);
}