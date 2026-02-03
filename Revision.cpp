#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0){
        cout<<"Positive";
    }
    else if(n == 0){
        cout<<"Zero";
    }
    else{
        cout<<"Negative";
    }
    char x;
    cout<<"Enter the character: ";
    cin>>x;
    if(x=='a' || x =='A'){
        cout<<"Vowel";
    }
    else if(x=='e' || x =='E'){
        cout<<"Vowel";
    }
    else if(x=='i' || x =='I'){
        cout<<"Vowel";
    }
    else if(x=='o' || x =='O'){
        cout<<"Vowel";
    }
    else if(x=='u' || x =='U'){
        cout<<"Vowel";
    }
    else if(x=='y' || x =='Y'){
        cout<<"Semi-Vowel";
    }
    else{
        cout<<"Consonent";
    }

    int num;
    cout<<"Enter the number according to your day: ";
    cin>>num;
    if(num == 1){
        cout<<"Monday";
    }
    else if(num == 2){
        cout<<"Tuesday";
    }
    else if(num == 3){
        cout<<"Wednesday";
    }
    else if(num == 4){
        cout<<"Thursday";
    }
    else if(num == 5){
        cout<<"Friday";
    }
    else if(num == 6){
        cout<<"Saturday";
    }
    else if(num == 7){
        cout<<"Sunday";
    }
    else{
        cout<<"Enter the number range between 1 to 7";
    }


    for(int i = 0; i < 5; i++){
        cout<<"Coder Army"<<endl;
    }

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n == 0){
        cout<<"Zero";
    }
    else if(n == 1 ){
        cout<<"Square of one is 1";
    }
    for(int i = 1; i <= n; i++){
        cout<<"Square of "<<i <<" is: "<< i*i <<"\n";
    }


    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    cout<<i<<"\n";

    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i = 2; i<=x; i+=2){
        cout<<i<<"\n";
    }

    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n == 0)
    {
        cout << "Zero";
    }
    else if (n == 1)
    {
        cout << "Square of one is 1";
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Square of " << i << " is: " << i * i << "\n";
    }

    return 0;
}
