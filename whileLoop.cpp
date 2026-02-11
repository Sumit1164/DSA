#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 2;
    // int j = 1;
    // while(i<=10){
    //     cout << n * i<<endl;
    //     i++;
    // }

    // while (i<=n)
    // {
    //     if(n % i == 0){
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    // while (i<=n)
    // {
    //     if(i % 2 == 0){
    //         cout << i << " " << "even ";
    //     }
    //     i+=2;
    // }


    // while (j <= n)
    // {
    //     if(j % 2 != 0){
    //         cout << j << " " << " odd ";
    //     }
    //     j++;
    // }
    

    // while (j<=10)
    // {
    //     cout << j<<" ";
    //     j++;
    // }
    

    // while (j<=10)
    // {
    //     cout << j * n << " ";
    //     j++;
    // }

    //!        ---------------- Do While Loop;
    // do{
    //     cout << j << " ";
    //     j++;
    // } while (j <= 10);


    //  Sum of n natural numbers

    // int sum = 0, k=1;
    // do{
    //     sum += k;
        
    //     k++;
    // } while (k <= n);

    // cout <<"The sum of "<< n<<" natural numbers is: "<< sum << " ";

    //!        ---------------- Break, Continue

    int i = 1, n;
    cout << "Enter the number: ";
    cin >> n;
    // while (i<=n)
    // {
    //     if (i==5)
    //     break;
    //     cout << i << " ";
    //     i++;
    // }

    // while (i <= n)
    // {
    //     if (i == 4)
    //     {
    //         i++;
    //         continue;
    //     }
    //     else if (i == 6)
    //     {
    //         i++;
    //         continue;
    //     }
    //     cout << i << " ";
    //     i++;
    // }

//!   ----------------------- Switch

    switch(n){
        case 1:
            cout << "Sumit";
            break;
        case 2:
            cout << "Kasu";
            break;
        case 3:
            cout << "Kasmit";
            break;
        default:
            cout << "Comming Soon";
    }

}