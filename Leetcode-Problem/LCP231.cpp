//  ! Leet Code problem number 231. Power of Two

#include<iostream>
    using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int x = n;
    if(n < 1){
        cout << "Negative number " << x <<" can not be power of 2";
        return 0;
    }

    while (n != 1)
    {
        if(n % 2 == 1){
            cout << "This number is not " << x << " square of 2";
            return 0;
        }
        n = n / 2;
    }
    cout << "The given number " << x << " is power of 2";
}