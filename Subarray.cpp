// DIVIDE ARRAY IN 2 SUBARRAY WITH EQUAL SUM
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (j = 0; j <= i; j++)
        {
            sum1 += arr[j];
        }
        cout << endl;
        for (j = i + 1; j < 7; j++)
        {
            sum2 += arr[j];
        }
        if (sum1 == sum2)
        {
            return 1;
        }
        cout << sum1 << " " << sum2;
    }
    return 0;
}