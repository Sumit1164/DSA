
#include<iostream>
using namespace std;
int main(){
    string address = "1.1.1.1";
    int index = 0;
    string ans;
    while(index<address.size()){
        if(address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];

        index++;
    }
    cout << ans<<" ";
}





/*
#include <iostream>
using namespace std;
int main()
{
    string address = "1.1.1.1";
    int index = 0;
    int a[] = {0, 2, 4, 8, 10};
    int aIndex = 0;
    string ans;
    while (index < address.size())
    {
        if(address[index] == a[aIndex])
            ans += address[index];
        else
            ans += "[.]";


        index++;
        aIndex++;
    }
    cout << ans << " ";
}

*/