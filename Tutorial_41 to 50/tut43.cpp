#include <iostream>
using namespace std;

// ambiguity class*****

class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;
    // if there is an ambiguity in derived class you have  to call the function by applying scope resolution
public:
    void greet()
    {
        base1 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World!" << endl;
    }
};

class D : public B
{
    int a;

    // public:
    //     void say()
    //     {
    //         cout << "Hello to all you!" << endl;
    //     }
};

int main()
{
    B b;
    b.say();

    D d;
    d.say();

    /*
    ****Ambiguity 1****

        base1 base1obj;
        base2 base2obj;

        base1obj.greet();
        base2obj.greet();

        derived d;
        d.greet();

    ****Ambiguity 1****
    */

    // ambiguity 1

    return 0;
}