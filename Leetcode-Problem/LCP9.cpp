//  ! Leet Code Problem number 9. Palindrome Number

#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int n = x, ans = 0, rem;
    if(x<0){
        cout << "The given number is negative" << x;
        return 0;
    }
    while(n){
        rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    if(x == ans){
        cout << "Palindrome";
        return 0;
    }else{
        cout << "Not palindrome";
        return 0;
    }
}