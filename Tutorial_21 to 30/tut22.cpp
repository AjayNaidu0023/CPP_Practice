//  OOPs - classes and objects

//  C++ --> Initially called --> c with classes by stroustroup
// class --> extension of structures (in c)
// Structures has some limitations
//      --> Members are public
//      --> no methods
// classes --> structures + more
// classes --> can have methods are properties
// classes --> can make you few members as private and few as public
// structures in C++ are typedfed
// you can declare objects along with class declaration like this:
/*class Employee{
    class definition
} lewis, bottas, kimi*/

// lewis.salary = 1000000 *** You can not set data to a private variable

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
    void display1(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        else
        {
            cout << "you have entered binary number";
            break;
        }
    }
}

void binary ::ones(void)
{

    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "\nDisplaying your binary number\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

void binary ::display1(void)
{
    cout << "\nDisplaying your binary numbers in swapped mode as 0=1 & 1=0.\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    // Nesting of members functions
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display1();

    return 0;
}