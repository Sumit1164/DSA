#include<iostream>
using namespace std;

void rotateClockwise(string &s){
    char a = s[s.size() - 1];
    int index = s.size()-2;
    while (index>=0)
    {
       s[ index +1] = s[index];
       index--;
    }
    s[0] = a;
}

void rotateAnticlockwise(string &s)
{
    char a = s[0];
    int index = 1;
    while (index<s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = a;
}

int main(){

    string str1 ="AMAZON", str2="AMAZON";
    if(str1.size()!=str2.size())
        cout << "The given both string length is not same";
    return 0;

    string clockwise, anticlockwise;
    clockwise = str1;
    rotateClockwise(clockwise); // 1 time rotate
    rotateClockwise(clockwise); // 2 time rotate

    if(clockwise==str2){
        cout << "The given string rotated clockwise!";
        return 1;
    }

    anticlockwise = str1;
    rotateAnticlockwise(anticlockwise);
    rotateAnticlockwise(anticlockwise);

    if(anticlockwise == str2){
        cout << "The given string rotated anticlockwise!";
        return 1;
    }

    cout << "The both are does not perform the rotation";
    // return 0;
}