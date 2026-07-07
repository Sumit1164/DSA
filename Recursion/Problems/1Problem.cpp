#include<iostream>
using namespace std;

void print(int x)
{
    if(x==1){
        cout << "Coder Army" << endl;
        return;
    }
    cout << "Coder Army" << endl;
    print(x - 1);
}


int main(){
    int n = 10;
    print(n);
}