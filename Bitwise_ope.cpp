#include<iostream>
using namespace std;
int main(){
    // Bitwise Operator in C++


    // & (Bitwise AND)

    int a = 4;

    int b = 7;

    cout<< "Bitwise AND of " << a << " and " << b << " is: " << (a & b) << endl;


    // | (Bitwise OR)

    int c = 8;

    int d = 5;

    cout<< "Bitwise OR of " << c << " and " << d << " is: " << (c | d) << endl;


    // ^ (Bitwise XOR)

    int e = 9;

    int f = 7;

    cout<< "Bitwise XOR of " << e << " and " << f << " is: " << (e ^ f) << endl;


    // ~ (Bitwise NOT)

    int x = 5;

    cout<< "Bitwise NOT of " << x << " is: " << (~x) << endl;


    // << (Left Shift)

    int g = 6;

    int h = 1;

    int i = 2;

    cout<< "Left Shift of " << g << " by " << h << " is: " << (g << h) << endl;

    cout<< "Left Shift of " << g << " by " << i << " is: " << (g << i) << endl;

/*
Formula for left shift:
num * 2^x

using example 

num = 6
x = 2

using formula: 6 * 2 ^ 2   =>    6 * 4  =>  24 answer
*/


    // >> (Right Shift)

    int j = 6;
    
    int k = 2;
    
    cout<< "Right Shift of " << j << " by " << k << " is: " << (j >> k) << endl;

    /*
    Formula for right shift:
    num / 2^x
    */
}