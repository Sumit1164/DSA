// DIVIDE ARRAY IN 2 SUBARRAY WITH EQUAL SUM
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
int main()
{
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (j = 0; j <= i; j++)
            sum1 += arr[j];
        cout << endl;
        for (j = i + 1; j < 7; j++)
            sum2 += arr[j];
        if (sum1 == sum2)
            return 1;
        cout << sum1 << " " << sum2;
    }
    return 0;
}
*/

bool divide(vector<int> arr){
    int max = 500, prefix = 0, total_sum = 0, n = arr.size();
    for (int i = 0; i < n; i++){
        total_sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix;
        if (ans == prefix)
        {
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in the array: ";
    for (int i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    cout << divide(v);
}