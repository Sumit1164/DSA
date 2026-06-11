#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your name: ";
    getline(cin, s);
    cout << "You are: " << s;
    cout << endl;
    cout << "The length of string is: " << s.size()<<endl;
    s.push_back('K');
    cout << "Sumit going to merry: "<<" "<<s;
}