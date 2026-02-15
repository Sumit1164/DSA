//  ! Leet Code problem number 69. Sqrt(x)

#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    if (x == 0)
        return 0; // Edge case

    long r = x; // Initial guess

    while (r * r > x)
    { 
        r = (r + x / r) / 2;
    }

    cout << "The squr of: " << r;
}