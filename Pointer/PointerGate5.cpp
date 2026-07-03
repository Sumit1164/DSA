#include <iostream>
using namespace std;

int five(char *str1,char *str2)
{
    while(*str1 = *str2){
        str1++, str2++;
    }
}


int main()
{
    char first[] = "Kajal";
    char second[] = "Sumit";
    five(first, second);
    cout << first << endl;
    return 0;
}