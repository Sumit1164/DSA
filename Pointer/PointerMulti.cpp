#include <iostream>
using namespace std;

void fun(int *px)
{
    px++;
}

void funAdd(int **ptr)
{
    *ptr = *ptr + 1;
}

int main()
{
    int n = 10;

    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;

    // I want to change pointer p1 address using function

    /*These are not change the address of p1
    cout << p1 << endl;
    fun(p1);
    cout << p1 << endl;
    */

    cout << p1 << endl;
    funAdd(p2);
    cout << p1 << endl;
}