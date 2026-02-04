#include <iostream>
using namespace std;
int main()
{
    /*
    int i,j,n;
    cout<<"Enter the value: ";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // Second way to print
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            cout<<"* ";
        }
        cout<<endl;
    }


    for(int row=1; row<=4; row++){
        for(int col=1; col<= 5; col++){
            cout<<"10 ";
        }
        cout<<endl;
    }


    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }


     for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    for(int r =1; r<=5; r++){
        for(int c=5; c>=1; c--){
            cout<<c<<" ";
        }
        cout<<endl;
    }


    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }



    int row, col;
    for(row = 1; row <= 5; row = row + 1){
        char al = 'a' + (row - 1);
        for(col = 1; col <= 5; col++){
            cout<<al<<" ";
        }
        cout<<endl;
    }




    int r;
    char c;
    for(r=1; r<=5; r++){
        for(c ='a'; c<='e'; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    */

    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            // cout<<count<<" ";
            // count++;

            //  second method
            cout << (i - 1) * 5 + j << " ";
        }
        cout << endl;
    }

    return 0;
}