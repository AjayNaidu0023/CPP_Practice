#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /* creating a constructor
     >>constructor is a special member of function member function with same
     name as class, it is automatically invoked
     >> It is used to initialize the objects of its class



    */

    complex(void); // constructor declaration

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void) //-->> This is a default costructor as it depends on parameter
{

    a = 10;
    b = 0;
}

int main()
{
    complex c;
    c.printNumber();
    c.printNumber();
    c.printNumber();

    return 0;
}

/*
Charaterstics of constructor

--> It should be declared in the public section of the class
--> They are automatically invoked whenever the objects is created
--> do not have return values and do not have return types
--> It can have default arguments
--> we cannot refer to their address

*/