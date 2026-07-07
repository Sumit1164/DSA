// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

float sum(float n, float m)
{
    return n + m;
}
float sub(float n, float m)
{
    return n - m;
}
float mul(float n, float m)
{
    return n * m;
}
float divs(float n, float m)
{
    return n / m;
}
int mod(int n, int m)
{
    return n % m;
}
int main()
{
    cout << "Welcome to simple calculator" << endl;
    int n;
    cout << "Choose 1 for: + | 2 for: - | 3 for: * | 4 for: / | 5 for: %    ";
    cin >> n;
    cout << "---------------------------------------------" << endl;
    float x, y;
    cout << "Enter The first number: ";
    cin >> x;
    cout << "Enter The second number: ";
    cin >> y;

    // if(n!=1)
    if (n == 1)
    {
        cout << sum(x, y);
    }
    else if (n == 2)
    {
        cout << sub(x, y);
    }
    else if (n == 3)
    {
        cout << mul(x, y);
    }
    else if (n == 4)
    {
        if (y == 0)
        {
            cout << "Error: Cannot divide by zero.";
        }
        else
            cout << divs(x, y);
    }
    else if (n == 5)
    {
        cout << mod(x, y);
    }
    else
    {
        cout << "Are you Dumb!";
    }

    return 0;
}