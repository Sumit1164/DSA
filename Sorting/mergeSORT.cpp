#include<iostream>
using namespace std;

void mergeSort(int arr[], int start, int end){
    // Mid calculate
    int mid = start + (end - start) / 2;

    // Divede left
    mergeSort(arr, start, mid);

    // Divede right
    mergeSort(arr, mid + 1, end);
}

int main(){
    // Merge Sort
    cout << " Merge Sort ";
    int arr[] = {};
    mergeSort(arr, 0, 7);
}