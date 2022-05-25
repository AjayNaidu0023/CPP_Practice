#include <iostream>
using namespace std;

// syntax for inheriting multiple inheritance
//  class derived : visibility-mode base1, Visibility- mode Base2
//      {
//          class body of class derived
//      }

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class derived : public base1, public base2{
    public:
        void show(){
            cout<<"The value of base1 is: "<<base1int<<endl;
            cout<<"The value of base2 is: "<<base2int<<endl;
            cout<<"The sum of base1 + base2 is: "<<base1int + base2int<<endl;
        }

};
    
int main()
{
    derived oops;
    oops.set_base1int(10);
    oops.set_base2int(25);

    oops.show();

    return 0;
}