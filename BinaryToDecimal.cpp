#include<iostream>
using namespace std;
int main(){
    int i, ans = 0, num, rem, mul = 1;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        // reminder
        rem = num % 2;
        // quotient
        num = num / 2;
        // ans
        ans = rem * mul + ans;
        // mul
        mul = mul * 10;
    }
    cout << ans << endl;
}