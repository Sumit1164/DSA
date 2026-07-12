// Given a String, count the number of consonants in it.
#include<iostream>
using namespace std;

int countConsonant(string str, int index, int n)
{
    if(index==n)
        return 0;
    if (str[index] != 'a' && str[index] != 'e' && str[index] != 'i' && str[index] != 'o' && str[index] != 'u')
        return 1 + countConsonant(str, index + 1, n);
    else
        return countConsonant(str, index + 1, n);
}
int main()
{
    string str = "sumitisagoodman";

    int n= str.size();
    cout<< countConsonant(str, 0, n);
}