// ! Leap Year problem on GFG

/*

Input: n = 4
Output: true
Explanation: 4 is not divisible by 100 and is divisible by 4 so its a leap year

Input: n = 2021
Output: false
Explanation: 2021 is not divisible by 100 and is also not divisible by 4 so its not a leap year


*/

#include<iostream>
using namespace std;
int main(){
    cout << "Check the year is Leap Year or Not";
    cout << endl;
    cout << endl;
    int num;
    cout << "Enter the year: ";
    cin >> num;

    if(num % 400 == 0){
        cout << "This year "<<num<<" is a Leap Year";
    }
    else if(num % 4 == 0 && num % 100 != 0){
        cout << "This year " << num << " is a Leap Year";
    }
    else{
        cout << "This year " << num << " is not a Leap Year";
    }
}