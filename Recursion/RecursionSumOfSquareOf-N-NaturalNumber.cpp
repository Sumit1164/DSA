#include<iostream>
using namespace std;

int sqrN(int n)
{
    if(n==1)
        return 1;
    return n * n + sqrN(n - 1);
}

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
    cout << endl;


    // Recursive Approach
    cout<<sqrN(n);
}