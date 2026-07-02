#include <iostream>
using namespace std;

void douV(int *p)
{
    for (int i = 0; i < 5; i++)
    {
        p[i] = 2 * p[i];
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    douV(arr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}