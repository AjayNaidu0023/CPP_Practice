#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y) //-->> This is a Parameterized costructor
// as it takes 2 inputs
{

    a = x;
    b = y;
}

int main()
{

    // Implicit call
    complex a(4, 6);
    a.printNumber();

    // explicit call
    complex b = complex(4, 9);
    b.printNumber();

    return 0;
}