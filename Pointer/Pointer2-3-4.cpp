#include<iostream>
using namespace std;

void poin3(int ***n)
{
    ***n = ***n + 30;
}

int main()
{
    int n = 10;

    int *p1 = &n; //Single Pointer
    // cout << p1 << endl;
    // cout << &n << endl;

    int **p2 = &p1; //Double Pointer
    // cout << &p1 << endl;
    // cout << p2 << endl;

    int ***p3 = &p2; //Three Pointer
    // cout << &p2 << endl;
    // cout << p3 << endl;


    // Value ko change karna ho jo ki n mein rakhi hai...
    *p1 = *p1 + 5;
    cout << "Single Pointe: " << n << endl;

    **p2 = **p2 + 5;
    cout << "Double Pointe: " << n << endl;

    // ***p3 = ***p3 + 10;
    poin3(p3);
    cout << "Triple Pointe: " << ***p3 << endl;
}