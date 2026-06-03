#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> V = {5, 2, 6, 7, 9, 2, 23, -20, 6};
    int n = V.size();

    int prefix = 0, total_sum = 0;

    for (int i = 0; i < n; i++)
    total_sum += V[i];

    for (int i = 0; i < n; i++){
        prefix += V[i];
        if(total_sum==2*prefix)
            cout << "Both are equal: "<<prefix << endl;
    }
}