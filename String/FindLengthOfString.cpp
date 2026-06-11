#include<iostream>
using namespace std;

int main(){
    string s = "Sumit";
    int start = 0;
    while (s[start]!='\0')
    {
        start++;
    }
    cout << start;
}