#include<iostream>
using namespace std;

int print(int n){
    if(n==1){
        return 1;
    }
    return n + print(n - 1);
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    // Iterative approach
    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;



    // Recursive approach
    cout<<print(n);
}