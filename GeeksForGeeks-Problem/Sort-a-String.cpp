#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "eabcabd";
    vector<int> alphabet(26, 0);
    for (int i = 0; i < s.size(); i++){
        alphabet[s[i] - 'a'];
    }
    string ans;
    for (int i = 0; i < 26; i++){
        char c = 'a' + i;
        while(alphabet[i]){
            ans += c;
            alphabet[i]--;
        }
    }
    cout << "The sorted string " << s;
    return 0;
}