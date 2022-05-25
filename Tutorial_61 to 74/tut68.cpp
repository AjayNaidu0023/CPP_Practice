#include <iostream>
using namespace std;

template <class T>
class lewis{
    public:
        T data;
        lewis(T a){
            data = a;
        }
        void display();
};


template <class T>
void lewis<T>:: display(){
            cout<<data<<endl;
        }

void func (int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func (T a){
    cout<<"I am templatised func()"<<a<<endl;
}


int main () {

    // lewis<float> l(4.4);
    // lewis <char> l('H');
    // lewis <char> l('H');
    // lewis <int> l(44);
    // cout<<l.data<<endl;

    // l.display();

    // func(44); // Exact match takes the highest priority
    func(44); // Exact match takes the highest priority


return 0;

}