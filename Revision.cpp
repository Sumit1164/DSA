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


    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Sum of two numbers is: " << a + b;
    cout << endl;
    int x = 97;
    char c = 'x';
    c = x;
    // cout<<"THIS IS CHAR AFTER TYPE CAST: "<< c;
    long long package;
    cout << "Enter the package: ";
    cin >> package;
    if (package > 1000000)
    {
        cout << "ABHI JOIN KAR RAHA HU BUT KUCH MONTH ME SALARY BADH JANA CHAHIYE: " << package;
    }
    else
    {
        cout << "LERE L@ND KE YE TERA PACKAGE";
    }

    int marks;
    cout << "Enter Your Math Marks: ";
    cin >> marks;
    if (marks >= 33)
    {
        cout << "BETA TU PASS HAI";
    }
    else
    {
        cout << "CHUD GAYE GURU";
    }

    int a, b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    if (a > b)
    {
        cout << "MAT KAR LALA 'A' BADA HAI TERE SE";
    }
    else
    {
        cout << "MEIN HU BADA 'B' SAMJHEEE.";
    }

    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    int age;
    cout << "Enter the ager: ";
    cin >> age;
    if (age > 18)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Teenager";
    }

    char x, y;
    cout << "Enter the starting Character: ";
    cin >> x;
    cout << "Enter the ending Character: ";
    cin >> y;
    for (char n = x; n <= y; n += 1)
        cout << n << " ";
    cout << "\n";
    for (int i = 10; i >= 1; i -= 1)
        cout << i << "\n";

    int count = 0;
    for (int i = 1; i <= 100; i += 3)
    {
        cout << i << " ";
        count++;
    }
    cout << "\n";
    cout << "Total odd numbers 1 to 100 is: " << count;

    int table;
    cout << "Enter the number for table: ";
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * " << i << " = " << table * i << "\n";
    }
    return 0;
}