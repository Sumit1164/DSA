#include<iostream>
using namespace std;

int main(){
    // I want to print like that --->  "Sumit is a "Good" boy!"
    string s = "Sumit is a \"Good\" boy!";
    // cout << s<<endl;
    string escape = "\0"; // Null so nothing to print.
    string escape = "\\0";
    cout<<escape;
}