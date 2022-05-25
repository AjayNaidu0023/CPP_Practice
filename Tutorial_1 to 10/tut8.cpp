#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // int a = 44;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 77;
    // cout<<"The value of a is: "<<a<<endl;

    // constants
    // const int a = 44;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 77;
    // cout<<"The value of a is: "<<a<<endl;

    // *******Manipulators in C++***********

    // int a = 1, b=22, c=333;

    // *******without setw*******
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of b is: "<<b<<endl;
    // cout<<"The value of c is: "<<c<<endl;

    // // ******with setw*******

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(5)<<b<<endl;
    // cout<<"The value of c is: "<<setw(6)<<c<<endl;

    // ********Operators Precedence**********

    int a = 2, b = 6;
    // int c = (a*5)+b;

    int c = ((((a * 5) + b) - 45) + 87);

    cout<<c<<endl;

    return 0;
}