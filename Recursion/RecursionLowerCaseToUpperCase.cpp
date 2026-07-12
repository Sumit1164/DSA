#include<iostream>
using namespace std;
void ltoU(string &str, int index)
{
    if(index==-1)
        return;
    str[index] = 'A' + str[index] - 'a';
    ltoU(str, index - 1);
}
int main()
{
    string str= "sumit";
    ltoU(str, 4);
    cout << str;
}