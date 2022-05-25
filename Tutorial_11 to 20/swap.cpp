#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 7, temp = 0;

    cout << a << " GAP " << b << endl;

    temp = b;
    b = a;
    a = temp;

    cout << a << " GAP " << b;

    return 0;
}