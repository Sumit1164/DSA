#include<iostream>
using namespace std;

void print(int n)
{
    if(n==2)
    {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    print(n - 2);
}

int main()
{
    // Print Even Number n to 1 using itrative approach
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // if(n%2==0){
    //     for (int i = n; i >=2; i-=2)
    //     {
    //         cout << i << endl;
    //     }
        
    // }
    // else{
    //     cout << "Please Enter Even Number!";
    // }

    // Print Even Number n to 1 using recursive approach

    if(n%2==0){
        print(n);
    }
    else{
        cout << "Please Enter an Even Number!";
    }
}