#include <iostream>
using namespace std;

// Employee Class

class employee
{

private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b2, int c3);
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// Currency class

class currency
{

private:
    float rupee, dollar, pound;

public:
    float euro;
    float dharam;

    void setcurrency(float rupee, float dollar, float pound);
    void getcurrency()
    {
        cout << "The rupee : " << rupee << endl;
        cout << "The dollar: " << dollar << endl;
        cout << "The pound : " << pound << endl;
        cout << "The euro  : " << euro << endl;
        cout << "The dharam: " << dharam << endl;
    }
};

void currency ::setcurrency(float rupee1, float dollar1, float pound1)
{
    rupee = rupee1;
    dollar = dollar1;
    pound = pound1;
}
int main()
{

    // employee lewis;
    // lewis.setData(1,7,44);
    // lewis.getData();

    currency conversion;
    conversion.euro = 81.52;
    conversion.dharam = 21.04;

    conversion.setcurrency(1.00, 77.28, 95.47);
    conversion.getcurrency();
    return 0;
}