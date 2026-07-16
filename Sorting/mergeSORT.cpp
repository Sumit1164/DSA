#include<iostream>
#include<vector>
using namespace std;


void merge (int arr[], int start, int mid, int end)
{
    vector<int> arrtemp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    while (left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            arrtemp[index] = arr[left];
            index++, left++;
        }
        else
        {
            arrtemp[index] = arr[right];
            index++, right++;
        }
    }
    // Left array is not empty yet
    while(left<=mid)
    {
        arrtemp[index] = arr[left];
        index++, left++;
    }
    // right array is not empty yet
    while (right <= end)
    {
        arrtemp[index] = arr[right];
        index++, right++;
    }

    // Put these value is array
    index = 0;
    while (start<=end)
    {
        arr[start] = arrtemp[index];
        start++, index++;
    }
}


void mergeSort(int arr[], int start, int end){

    if(start==end)
        return;

    // Mid calculate
    int mid = start + (end - start) / 2;

    // Divede left
    mergeSort(arr, start, mid);

    // Divede right
    mergeSort(arr, mid + 1, end);

    // merge sort call
    merge(arr, start, mid, end);
}


int main(){
    // Merge Sort
    cout << " Merge Sort ";
    int arr[] = {6,3,1,2,8,9,10,7,3,12};
    mergeSort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
}