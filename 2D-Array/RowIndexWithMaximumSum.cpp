#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {3, 6, 9, 2, 4, 8, 12, 6, 5, 10, 15, 1};
    int sum = INT8_MIN, index = -1;
    for (int i = 0; i < 3; i++)
    {   int totalx = 0;
        for (int j = 0; j < 4; j++)
        {    
            totalx += arr[i][j];
            if(sum<totalx)
            {    
                sum = totalx;
                index = i;
            }
        }

    }
    cout << index << " Ye Le!";
}