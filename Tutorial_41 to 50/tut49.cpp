#include <iostream>
using namespace std;

/*

syntax for initialization list in constructor:
constructor (arguments-List) : *-*-*-*-*initilization-section*-*-*-*-*
{
    Assignment + other code:

}

class test{

    int a, b;
    public:
        test(int i, int j): a(i), b(j) {constructor-Body}
};
*/

class test
{

    int b,a;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(a+j)
    // test(int i, int j) : b(j), a(i + b) //--->>> RED FLAG because a will be initialized first
    test (int i, int j)   

    {
        a = i;
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "value of a is: " << a << endl;
        cout << "value of b is: " << b << endl;
    }
};
int main()
{

    test t(6, 4);

    return 0;
}