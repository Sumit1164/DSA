#include<iostream>
using namespace std;
int main(){
    int a[5] = {56, 45, 23, 8, 2};
    int x;
    bool found = false;
    cout << "Enter the number which you want to search: ";
    cin >> x;
    for (int c = 0; c < 5; c++){
        if (x == a[c]){
            found = true;
            break;
        }
    }

    if (found)
        cout << "The given " << x << " element is present in the array." << endl;
    else
        cout << "The given " << x << " element is not present in the array." << endl;
    return 0;
}