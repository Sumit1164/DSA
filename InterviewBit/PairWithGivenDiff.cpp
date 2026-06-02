// Pair with given difference 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr= {2,3,5,10,50,80};
    int target = 45;
    sort(arr.begin(), arr.end());
    int start = 0, end = 1, n =arr.size();
    while (end<n)
    {
        if(arr[end]-arr[start] == target){
            cout << "The given difference is here, start: " << arr[start] << " end is: " << arr[end];
            break;
        }
        else if (arr[end] - arr[start] > target){
            // cout << "The given difference is too higher start: " << arr[start] << " end is: " << arr[end];
            start++;
        }
        else{
            // cout << "The given difference is low start: " << arr[start] << " end is: " << arr[end];
            end++;
        }
        if (start == end)
        {
            end++;
        }
    }
}