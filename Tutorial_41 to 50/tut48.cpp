#include <iostream>
using namespace std;

/*

********* Case 1:*******
class B : public A{
    orderof of execution of constructor -> first A() then B()
};


********* Case 2:*******
class A: public B, Public C{
    order of of execution of constructor -> First B() then C() and A()
}

********* Case 3:*******

Class A: Public B virtual Public C{
    order of of execution of constructor ->First C() then B() and A()

}


*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 Construtor called!" << endl;
    }
    void printData1(void)
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "Base2 constructor called!" << endl;
    }

    void printData2(void)
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class derived : public base1, public base2
{

    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called" << endl;
    }
    void printData3(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of  derived2 is: " << derived2 << endl;
    }
};
int main()
{
    derived lewis(44, 183, 7, 103);
    lewis.printData1();
    // lewis.printData2();
    // lewis.printData3();
    return 0;
}