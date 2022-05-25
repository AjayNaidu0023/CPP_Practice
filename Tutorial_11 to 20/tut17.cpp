#include <iostream>
using namespace std;

// this is a normal function where main function checks for a function and executes it and takes the return value

// int product(int a , int b){
//     return a*b;
// }

// This is a inline function where if we use ***inline*** word before function to replace entire code where ever the -
// -function has been called
// Advantage:       where if the function is not doing much of work we can call inline function and replace code
// Disadvantage:    If we use this everywhere then the cache becomes huge and it takes alot of memory

// ****INLINE FUNCTION*****
// inline int product(int a , int b){
//     return a*b;
// }

// int product(int a , int b){
// Beloew line are not recommened to use with inline function **Static**
//     static int c =0; **This executes only once because it is a static function variable.
//     c = c +1;
//     return a*b+c;
// }

int moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

//  ***If we don't want to modify inside a function we use const inside a function.***
// These are mainly used in reference variable and pointers
// int strlen(const char *p){

// }

int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;

    int money;
    cout << "Enter the amount: " << endl;
    cin >> money;
    cout << "If you invest " << money << " rs this money you'll get " << moneyReceived(money) << " rs this much in a year" << endl;
    cout << "For people above 60 years if you invest " << money << " rs this money you'll get " << moneyReceived(money, 1.07) << " rs this much in a year" << endl;

    return 0;
}