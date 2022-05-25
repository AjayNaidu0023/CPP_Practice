

using namespace std;

#include <iostream>
// System header files: It comes with compiler

// #include "This_is_a_header_file.h" -->> If this header file is not in the directory it will throw an error
// user defined header files: It is written by programmer

int main()
{
    int a = 5, b = 7;
    cout << "Operators in C++";

    cout << "\nFollowing are the types of operators in C++\n";

    // *******Arthimetic operators*******
    cout << "\nFollowing are the Arthimetic of operators in C++\n";
    cout << "Sum of a+b is " << a + b << endl;
    cout << "Subtraction of a-b is " << a - b << endl;
    cout << "Multiplication of a*b is " << a * b << endl;
    cout << "Divide of a/b is " << a / b << endl;
    cout << "Percentage of a%b is " << a % b << endl;
    cout << "appreciation of a++ is " << a++ << endl;
    cout << "After appreciation the value of a is " << a << endl;
    cout << "appreciation of b++ is " << b++ << endl;
    cout << "After appreciation the value of b is " << b << endl;
    cout << "depreciation of --a is " << --a << endl;
    cout << "After depreciation value of a is " << a << endl;
    cout << "depreciation of --b is " << --b << endl;
    cout << "After depreciation value of b is " << b << endl;

    // ********Assigment operators********

    // int a = 5, b = 7;
    // char c = 'd';
    // float e = 0.1;
    // double f = 0.000001;

    // ******* Comparison operators*******
    cout << "\nFollowing are the Comparison of operators in C++\n";
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;

    // *******Logical operators*******
    cout << "\nFollowing are the Logical of operators in C++\n";
    cout << "The value of this logical and operator is ((a==b) && (a<b)) " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator is ((a==b) || (a<b)) " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator is (!(a==b))" << (!(a == b)) << endl;

    return 0;
}
