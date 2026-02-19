// this problem is convert small 'a' to capital 'A'

#include<iostream>
using namespace std;

char Convert(char ax){
    char ans = ax - 'a' + 'A';
    cout << "The converted character is: " << ans;
}

int main(){
    char x;
    cout << "Enter the character: ";
    cin >> x;
    Convert(x);
}