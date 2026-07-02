#include <iostream>
using namespace std;

void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    int num = 10;
    int temp = num;
    increment(&num);
    cout << num << endl;
}