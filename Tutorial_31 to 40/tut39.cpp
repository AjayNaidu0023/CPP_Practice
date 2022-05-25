#include<iostream>
using namespace std;


class base{

    protected:
        int  a;
    private:
        int  b;

};

/*

****for a protected member:******
    
                    Public derivation     Private Derivation      Protected Derivation
    1. Private      will not inherit       will not inherit        will not inherit
    2. Public        public                Private                  protected
    3. Protected     Protected             Private                  protected                

*/
class derived : protected base{


};
int main (){

    base b;
    derived d;
    // cout<<b.a; // will not work because a is protected
    
return 0;
}