#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 2;

    // Iterative approach 
    for (int i = 1; i <=n; i++)
    {
        sum +=2* i;
    }
    cout << sum;
}