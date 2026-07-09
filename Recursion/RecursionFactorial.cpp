#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Iterative approach 
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        count = count * i;
    }
    cout << count<<" ";
}