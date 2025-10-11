#include<iostream>
#include<vector>
#include<algorithm>
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
    // s.pop_back();
    //  Remove element from specific index
    // s.erase(s.begin() + 2);
    // Insert element at specific index
    // s.insert(s.begin() + 2, 100);
    // Size of vector (number of elements)
    // cout<<"Size of vector: "<<s.size()<<endl;
    // Clear the vector
    // s.clear();
    // Capacity of vector (total allocated space)
    // cout<<"Capacity of vector: "<<s.capacity()<<endl;
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout << endl;

    // Front, Back, at, empty
    /*
    cout <<"Front element " <<s.front() << endl; // first element
    cout <<"Back element " <<s.back() << endl; // last element
    cout <<"Empty status " <<s.empty() << endl;  // 0 means false, 1 means true
    cout <<"Element at index " <<s.at(2) << endl; // element at index 2


   // Iterator in vector
    s.begin(); // points to first element
    s.end(); // points to next of last element
    for (auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // Reverse iterator in vector
    s.rbegin(); // points to last element
    s.rend(); // points to next of first element
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // Sorting in vector


    vector<int> v = {4, 7, 9, 56, 34, 87, 1, 58, 24};
    sort(v.begin(), v.end()); // sorts in ascending order
    sort(v.begin(), v.end(), greater<int>()); // sorts in descending order
    cout << "Sorted vector: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    */
    cout << endl;

    // search in vector binary search
    // cout << binary_search(s.begin(), s.end(), 40) << endl; // returns 1 if found else 0

    // Find the index of an element in vector
    cout << find(s.begin(), s.end(), 40) - s.begin() << endl;
    return 0;
}