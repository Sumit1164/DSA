#include<iostream>
using namespace std;

int pows(int num, int n)
{
    if(n==1){
        return num;
    }
    return num * pows(num, n - 1);
}

int main()
{
    int powerOf2;
    cout << "Enter the power of 2:  ";
    cin >> powerOf2;

    // Iterative approach 
    // for (int i = 1; i <=n; i++)
    // {
    //     sum +=2* i;
    // }
    // cout << sum;

    // Recursive approach
    cout<< pows(2, powerOf2);
}