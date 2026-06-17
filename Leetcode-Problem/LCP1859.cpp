#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s = "is2 sentence4 This1 a3";
        vector<string> ans(10);
        int index = 0, count = 0;
        string temp;

        while (index < s.size())
        {
            if (s[index] == ' ')
            {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
                index++; // fix
            }
            else
            {
                temp += s[index]; // fix
                index++;
            }
        }

        // process last word
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;

        temp.clear();

        for (int i = 1; i <= count; i++)
        {
            temp += ans[i];
            temp += ' '; // fix
        }

        temp.pop_back();
        // return temp;
        cout << temp;
}