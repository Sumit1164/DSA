#include<iostream>
using namespace std;

int BinarySearchX(int n, int arr[], int key){
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            cout << "The value of mid is the key: ", key;
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "Thank you for using Binary Search, YOU ARE SEARCHING UNAVALABLE ELEMENT. " << key << endl;
    return -1;
}

int main(){
    int arr[20];
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number, that's you want to target: ";
    cin >> key;

    cout<<BinarySearchX(n, arr, key);
    return 0; 
}