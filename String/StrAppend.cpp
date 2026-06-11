#include <iostream>
using namespace std;
int main()
{
    string s = "Sumit", k = "Kajal";
    string sk = s + k;
    s.push_back('T');
    k.push_back('T');
    // cout << "The world best couple is: " << sk;
    // cout << "The world best couple name is: " << s << " and " << k;

    string example = "Rola hai ";

    example.push_back('N');
    // second way to add
    example = example+" N";
    cout << "Without pop_back: " << example<<endl;
    example.pop_back();
    cout << "With pop_back: " << example << endl;
}