#include<iostream>
using namespace std;

void hBW(int n)
{
    if(n==0)
    {
        cout << "Happy Birthday!"<<endl;
        return;
    }
    cout << n << " Days Left for Birthday"<<endl;
    hBW(n - 1);
}

int main()
{
    int n;
    cout << "Enter the Days: ";
    cin >> n;

    // Iterative Approach
    for (int i = n; i >0; i--)
    {
        cout << i << " Days Left for Birthday" << endl;
    }
    cout << "Happy Birthday";



    // Recursive Approach
    // hBW(n);
}