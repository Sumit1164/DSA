#include<iostream>
using namespace std;

void print (int n)
{
    if(n==1){
        cout << n;
        return;
    }
    cout << n << endl;
    print(n - 1);
}

int main()
{
    // Print n to 1 using itrative approach
    int n = 5;
    // for (int i = n; i >0; i--)
    // {
    //     cout << i << endl;
    // }

    // Print n to 1 using recursive approach
    print(n);
}