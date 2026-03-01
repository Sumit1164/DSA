#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6, 11, 7, 4, 9, 34};
    int i=0, j=5;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i <=5; i++)
    {
        cout << "Array: " << arr[i] << endl;
    }
    
}