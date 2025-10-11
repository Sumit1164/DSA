#include<iostream>
#include<vector>
using namespace std;
int main(){
    // initialization of vector
    vector<int> s;
    // Insert elements in vector
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    s.push_back(50);
    // Remove elements from vector (last element)
    s.pop_back();
    //  Remove element from specific index
    s.erase(s.begin() + 2);
    // Insert element at specific index
    s.insert(s.begin() + 2, 100);
    // Size of vector (number of elements)
    cout<<"Size of vector: "<<s.size()<<endl;
    // Clear the vector
    // s.clear();
    // Capacity of vector (total allocated space)
    cout<<"Capacity of vector: "<<s.capacity()<<endl;
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}