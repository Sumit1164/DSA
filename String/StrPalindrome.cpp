#include<iostream>
using namespace std;
int main()
{
    string p = "naman";
    int start = 0, end = p.size()-1;
    while (start<end)
    {
        if(p[start] != p[end])
        {
            cout << "The given string is not palindrom!";
            return 0;
        }
        start++;
        end--; 
    }
    cout << "The given string is palindrome!";
    return 0;
}