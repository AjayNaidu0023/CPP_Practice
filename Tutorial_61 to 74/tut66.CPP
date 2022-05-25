#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class lewis{
    public:
        T1 a;
        T2 b;
        T3 c;

        lewis(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
        }

};
int main () {

    lewis<> h(44, 4.4, 'L');
    h.display();

    lewis<float, char,char> l(44,'L','h');
    l.display();

return 0;

}