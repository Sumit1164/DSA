#include<iostream>
using namespace std;

bool palind(string s, int start, int end)
{
    if(start >= end)
    {
        return 0;
    }

    if(s[start] != s[end]){
        return 0;
    }
    else
        return palind(s, start+1, end-1);
}

int main()
{
    string str = "naman";
    cout<< palind(str, 0, 4);
}