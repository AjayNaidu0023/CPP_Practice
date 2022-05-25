#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_Base;
        void display(void){
            cout<<"BC Dispalying Base Class variable var_Base: "<<var_Base<<endl;
        }
        
        
};

class DerivedClass : public BaseClass{

    public:

    int var_Derived;
        void display(void){
            cout<<"DC Dispalying Base Class variable var_Base: "<<var_Base<<endl;
            cout<<"DC Dispalying Derived Class variable var_Derived: "<<var_Derived<<endl;
        }
    

};

int main (){

    BaseClass *Base_Class_Pointer;

    BaseClass obj_Baseclass;
    DerivedClass obj_DerivedClass;

    Base_Class_Pointer = &obj_DerivedClass; // pointing base class pointer to derived class pointer
    
    Base_Class_Pointer->var_Base = 44;
    // Base_Class_Pointer->var_Derived = 65; // This will throw an error
    Base_Class_Pointer->display();

    DerivedClass *derived_Class_Pointer;
    derived_Class_Pointer = &obj_DerivedClass;
    derived_Class_Pointer->var_Derived = 98;
    derived_Class_Pointer->var_Base = 968;
    derived_Class_Pointer->display();

return 0;
}