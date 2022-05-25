#include <iostream>
using namespace std;

class number
{
    float a;

public:
    number()
    {
        a = 0;
    }
    number(float num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    number x(0.1), y(02), z(44);
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display(); 

    // z2 = z;  // this is will not invoke copy constructor
    
    number z3 = z; // this wil invoke copy constructor
    z3.display();
    return 0;
}