#include<iostream>
using namespace std;

int cVowel(string s, int index)
{
    if(index == -1)
        return 0;

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
        return 1 + cVowel(s, index - 1);
    else
        return cVowel(s, index - 1);
}


int main()
{
    string str = "Sumit";
    cout<< cVowel(str, 4);
}