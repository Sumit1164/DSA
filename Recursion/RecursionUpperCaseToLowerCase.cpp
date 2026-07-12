#include<iostream>
using namespace std;

void utoL(string &str, int index)
{
    if(index==-1)
        return;
    str[index] = 'a' + str[index] - 'A';
    utoL(str, index - 1);
}
// Call by refrence 
int main()
{
    string str = "SUMIT";
    utoL(str, 4);
    cout << str;
}