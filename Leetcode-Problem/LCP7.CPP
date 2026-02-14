// !     Leet Code problem number 7. Reverse Integer

#include<iostream>
using namespace std;

int main()
{
    int x = -456,
        ans = 0,
        rem;

    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        ans = ans * 10 + rem;
    }
    cout << ans;

    // cout << INT32_MAX;
    // cout << endl;
    // cout << INT32_MAX / 10;
    // cout << INT32_MIN;
    // cout << endl;
    // cout << INT32_MIN / 10;
}
