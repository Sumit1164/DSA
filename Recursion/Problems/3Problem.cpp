#include<iostream>
using namespace std;

void print(int z)
{
    // int x = z;
    if(z == 10){
        cout << z << endl;
        return;
    }
    cout << z << endl;
    print(z +1);
}

int main()
{
    int n = 1;
    print(n);
}