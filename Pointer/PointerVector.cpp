#include<iostream>
#include<vector>
using namespace std;

void pass(vector<int>&v1) //Pass by reference 
{
    for (int i = 0; i < 5; i++)
        v1[i] = 10;
}

int main()
{
    vector<int> v(5, 0);
    pass(v);

    cout << v[4];
}