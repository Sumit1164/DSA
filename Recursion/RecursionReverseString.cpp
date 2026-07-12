#include<iostream>
using namespace std;

void rev(string s, int start, int end)
{
    if(start>=end)
        return;

    char k = s[start];
    s[start] = s[end];
    s[end] = k;
    rev(s, start + 1, end - 1);
}

int main()
{
    string str = "SUMIT";
    rev(str, 0, 4);
    cout << str;
}