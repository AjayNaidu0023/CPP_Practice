#include <iostream>
using namespace std;

//****Base Class****
class employee
{

public:
    int id;

    float salary;

    employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
        employee(){}
};

/* ****Derived Class******
class {{Derived-class-name}} : {{Visibility-Mode}} {{Base-class-name}}
{

    class members /methods/etc.
}

Important note:
1. Default visibility mode is private just like class
2. Public visibility mode: Public members of base class becomes public member of the derived class 
2. Private visibility mode: Public members of base class becomes private member of the derived class 
4. Private members are never inherited 
*/

// creating a programmer class derived from employee base class

class programmer : public employee
{
public:
programmer(int inpID){
    id = inpID;
}
    int languageCode = 9;
    void getData (){
        cout<<id<<endl;
    }
};

int main()
{

    employee lewis(1), bottas(2);
    cout << lewis.salary << endl;
    cout << bottas.salary << endl;

    programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}