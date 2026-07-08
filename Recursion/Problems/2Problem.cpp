#include<iostream>
using namespace std;

void print(int s)
{
    if(s ==1)
    {
        cout << s << endl;
        return;
    }
    cout << s << endl;
    print(s - 2);
}

int main()
{
    int n = 9;
    print(n);
}