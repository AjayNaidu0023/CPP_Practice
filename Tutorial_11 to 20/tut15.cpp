#include <iostream>
using namespace std;

// Function Prototype
//  type function name (arguments);

int sum(int a, int b);
void g(void);

int main()
{

    int num1, num2;

    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "sum of num1 & num2: " << sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{
    // int a and int b are formal parameters and will be taking values from main function
    int c = a + b;
    return c;
};

void g()
{
    cout << "\nHello";
}