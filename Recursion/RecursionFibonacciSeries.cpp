#include<iostream>
using namespace std;

int main()
{
    int first = 0, second = 1, sum = 0;
    int n;
    cout << "Enter the length of the Fibonacci Index: ";
    cin >> n;

    cout << first << " " << second << " ";
    for (int i = 2; i <= n; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
        cout << sum << " ";
    }
}