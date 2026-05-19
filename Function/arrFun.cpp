#include<iostream>
using namespace std;

void fun(int ar[], int n){
    for (int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
}

int main(){
    int arr[5] = {5, 6, 7, 8, 9};
    fun(arr, 5);
}