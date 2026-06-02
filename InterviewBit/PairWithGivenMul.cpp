// Pair with given multiply

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {5, 6, 2, 7, 8, 3, 9};
    int target = 35;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int start = 0, end = n- 1;
    while (start<end)
    {
        if(arr[start] * arr[end] == target){
            cout << "The given multiplication is here, start: " << arr[start] << " end is: " << arr[end]<<" the target is: "<<target<<"\n";
            return 0;
        }
        else if (arr[start] * arr[end] > target){
            end--;
        }
        else{
            start++;
        }
    }
    cout << "No pair found" << endl;
}