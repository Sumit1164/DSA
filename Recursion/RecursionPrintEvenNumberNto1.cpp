#include<iostream>
using namespace std;
int main()
{
    // Print Even Number n to 1 using itrative approach
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n%2==0){
        for (int i = n; i >=2; i-=2)
        {
            cout << i << endl;
        }
        
    }
    else{
        cout << "Bakchodi mat kar be laude!";
    }
}