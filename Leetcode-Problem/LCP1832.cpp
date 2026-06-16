#include<iostream>
#include<vector>
using namespace std;
int main(){
    string sentance = "thequickbrownfoxjumpsoverthelazydog";
    vector<int> alphabet(26, 0);

    for (int i = 0; i < sentance.size(); i++){
        alphabet[sentance[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++){
        if(alphabet[i]==0){
            cout << "The given sentance is not contain all alphabet a to z";
            return 0;
        }
    }
    cout << "The given sentance is contains all the alphabet a to z";
    return 0;
}