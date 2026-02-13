#include<iostream>
using namespace std;

/*
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




// !  ------------> BINARY TO DECIMAL

int main(){
    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter the number: ";
    cin >> num;
    while (num>0)
    {
        // reminder
        rem = num % 10;
        // number divide
        num /= 10;
        // ans
        ans += mul * rem;
        // mul
        mul *= 2;
    }
    cout << ans ;
}


*/

// ! ----------> Decimal to octagan

int main()
{
    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0)
    {
        // reminder
        rem = num % 8;
        // number divide
        num /= 8;
        // ans
        ans += mul * rem;
        // mul
        mul *= 10;
    }
    cout << ans;
}