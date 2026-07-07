#include<iostream>
using namespace std;



void fun0(int n)
{
    cout << "happy birthday\n";
}
void fun1(int n)
{
    cout << n << " Days left for birthday\n";
    fun0(0);
}
void fun2(int n)
{
    cout << n << " Days left for birthday\n";
    fun1(n - 1);
}

void fun3(int n){
    cout << n << " Days left for birthday\n";
    fun2(n - 1);
}





void hBW(int n)
{
    // Base Case
    if(n==0)
    {
        cout << "Happy Birthday!"<<endl;
        return;
    }
    cout << n << " Days Left for Birthday"<<endl;
    hBW(n - 1);
}

int main()
{
    int n;
    cout << "Enter the Days: ";
    cin >> n;

    // Iterative Approach
    // for (int i = n; i >0; i--)
    // {
    //     cout << i << " Days Left for Birthday" << endl;
    // }
    // cout << "Happy Birthday";



    // Functional Approach
    // fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);

    // Functional Approach 2
    // fun3(3);

    // Recursive Approach
    hBW(n);
}