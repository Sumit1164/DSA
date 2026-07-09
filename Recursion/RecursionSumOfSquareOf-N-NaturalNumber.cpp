#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;

    // Iterative Approach 
    for (int i = 1; i <=n; i++)
    {
        sum += i*i;
    }
    cout << sum;
}