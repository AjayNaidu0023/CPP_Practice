#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base;
    virtual void display(void)
    {
        cout << "BC Dispalying Base Class variable var_Base: " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int var_Derived;
    void display(void)
    {
        cout << "DC Dispalying Base Class variable var_Base: " << var_Base << endl;
        cout << "DC Dispalying Derived Class variable var_Derived: " << var_Derived << endl;
    }
};

int main()
{   
    BaseClass * base_Class_Pointer;
    BaseClass Obj_Base;
    DerivedClass Obj_Derived;

    base_Class_Pointer = &Obj_Derived;
    base_Class_Pointer->display();


    return 0;
}