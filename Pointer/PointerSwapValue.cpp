#include<iostream>
using namespace std;

void swapped(int *n, int *m){
    
    //Pass by pointer
    *n = *n + *m;
    *m = *n - *m;
    *n = *n - *m;

    // a = a+b = 25
    // b = a-b = 10
    // a = a-b = 15
}
int main()
{
    int first = 10;
    int second =15;

    swapped(&first, &second);
    cout << first << " " << second;
}