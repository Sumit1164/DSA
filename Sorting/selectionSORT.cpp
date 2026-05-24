#include<iostream>
using namespace std;

int main(){
    int arr[7] = {5, 7, 3, 2, 9, 1, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n -1; i++)
    {
        int index = i;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
            
        }

        swap(arr[i], arr[index]);
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

/*
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            int index = i;
            for(int j = i + 1; j < n; j++){
                if(nums[j]< nums[index])
                    index = j;
            }
            swap(nums[i], nums[index]);
        }
        return nums;

*/


// HW -> Descending Order 
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 4, 8, 5, 3};
    int i, j;

    for (i = 0; i < 5 - 1; i++)
    {
        int index = i;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}