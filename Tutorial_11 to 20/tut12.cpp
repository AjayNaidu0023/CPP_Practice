#include <iostream>
using namespace std;

int main()
{
    // what is pointer?
    // Ans: A data type which holds the address of otherdata types

    int a = 1;

    int *b = &a;

    // ********** & --->> is a address operators*******
    // address of a is 0x61ff08 for example

    cout << "The address of a is:                          " << &a << endl;
    cout << "The address of a is:                          " << b << endl;

    // * --->> (value at the assigned pointer)is dereference operators

    cout << "The value of address of b is:                 " << *b << endl;

    cout << b;

    int **c = &b;
    cout << "The address of b is                   " << c << endl;
    cout << "The address of b is                           " << &b << endl;
    cout << "The value of address c is                     " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}