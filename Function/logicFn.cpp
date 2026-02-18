#include <iostream>
using namespace std;

bool Prime(int a)
{
    if (a < 2)
        return false;

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

long long Factorial(int a)
{
    long long fact = 1;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int Multi(int x, int y){
    return x * y;
}

void fun(){
    cout << "Hello World!" << endl;
}
int main()
{

    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    // Prime check
    if (Prime(a))
        cout << a << " is Prime" << endl;
    else
        cout << a << " is Not Prime" << endl;

    if (Prime(b))
        cout << b << " is Prime" << endl;
    else
        cout << b << " is Not Prime" << endl;

    // Factorial
    cout << "Factorial of " << a << " is " << Factorial(a) << endl;
    cout << "Factorial of " << b << " is " << Factorial(b) << endl;

    cout << "Sum of two numbers: " << sum(a, b) << endl;

    cout << "Multiply of two numbers: " << Multi(a, b) << endl;

    fun();
    return 0;
}
