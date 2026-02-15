//  ! Leet Code problem number 1009. Complement of Base 10 Integer


#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int s = x;
    int ans = 0, mul = 1, rem;
    if(x <= 0){
        cout << "The given number is negative or zero " << s;
        return 0;
    }
    while (x)
    {
        rem = x % 2;
        rem = rem ^ 1;
        x = x / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << "The complement of " << s << " is : " << ans;
    return 0;
}