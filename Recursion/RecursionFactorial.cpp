#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    else if(n==0)
        return 1;


    // 2nd way
    // if (n == 1 || n==0)
    //     return 1;
    

    return n* fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Iterative approach 
    /*
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        count = count * i;
    }
    cout << count<<" ";
    */

    // Recursive approach

    if(n<0){
        cout << "Mat Kar Lalaa\nThe given number is not possible to find the factorial: "<<n;
        return 0;
    }
    cout << fact(n);
}