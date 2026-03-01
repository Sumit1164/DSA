#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

bool armstrong(int x, int digit){
    int n = x, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans += (int)pow(rem, digit);
    }
    if (ans == x)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // count digit
    int n = countDigit(num);

    // armstrong number
    cout << armstrong(num, n);
}