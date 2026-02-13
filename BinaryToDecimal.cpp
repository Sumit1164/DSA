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

*/ 

//  ! -------------> Binary to Octal
int main()
{
    int binary;
    cout << "Enter binary number: ";
    cin >> binary;

    int decimal = 0, base = 1;

    // Step 1: Binary → Decimal
    while (binary > 0)
    {
        int last = binary % 10;
        decimal += last * base;
        base *= 2;
        binary /= 10;
    }

    // Step 2: Decimal → Octal
    int octal = 0, mul = 1;

    while (decimal > 0)
    {
        int rem = decimal % 8;
        octal += rem * mul;
        mul *= 10;
        decimal /= 8;
    }

    cout << "Octal: " << octal;
}
