#include <iostream>
using namespace std;
int main()
{
    int i;
    int arr[] = {5, 3, 6, 7, 8};
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << arr[i + 1] << " ";
    }
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        cout << arr[i] << arr[i + 1] << arr[i + 2] << " ";
    }
    cout << endl;
    for (i = 0; i < 2; i++)
    {
        cout << arr[i] << arr[i + 1] << arr[i + 2] << arr[i + 3] << " ";
    }
    cout << endl;
    for (i = 0; i < 1; i++)
    {
        cout << arr[i] << arr[i + 1] << arr[i + 2] << arr[i + 3] << arr[i + 4] << " ";
    }
    cout << endl;
    cout << "WGO?";

    return 0;
}