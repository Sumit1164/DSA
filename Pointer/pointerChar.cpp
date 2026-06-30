#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    char *ptr = &ch;

    cout << "Address: " << static_cast<void *>(ptr) << endl;
    cout << "Character: " << *ptr << endl;

    return 0;
}