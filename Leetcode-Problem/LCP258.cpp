//! Leetcode Problem number(LCP) - 258. Add Digits

/*


Input: num = 38
Output: 2
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2


*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter The Number: ";
    cin >> num;
        while (num > 9)
        {
            int rem, ans = 0;
            while (num != 0)
            {
                rem = num % 10;
                num /= 10;
                ans += rem;
            }
            num = ans;
        }
    cout<<"The sum of two digit is: "<< num;
};