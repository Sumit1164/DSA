#include<iostream>
using namespace std;

void fibo(int first, int second, int n)
{
    if (n == 1)
    {
        return;
    }
    int sum = first + second;
    first = second;
    second = sum;
    cout << sum << " ";
    fibo(first, second, n - 1);
}


int main()
{
    int first = 0, second = 1, sum = 0;
    int n;
    cout << "Enter the length of the Fibonacci Index: ";
    cin >> n;

    // iteration approach
    cout << first << " " << second << " ";
    // for (int i = 2; i <= n; i++)
    // {
    //     sum = first + second;
    //     first = second;
    //     second = sum;
    //     cout << sum << " ";
    // }


    // recursive approach
    fibo(first, second, n);
}