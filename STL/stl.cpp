#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> s = {5};
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    s.push_back(50);
    s.push_back(60);
    s.push_back(70);
    s.push_back(80);
    s.pop_back();
    s.erase(s.begin() + 2);
    // s.clear();
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}