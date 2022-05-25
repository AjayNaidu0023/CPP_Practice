//Constructor Overloading

#include<iostream>
using namespace std;

class complex{

    int a,b;

    public:
        // Default Constructor
        complex(){
            a = 0;
            b = 0;
        }

        // Parameterized construcrtor
        complex(int x, int y){
            a = x;
            b = y;
        }

        // Parameterized construcrtor
        complex(int x){
            a = x;
            b = 0;
        }

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


int main (){

    complex c1(4, 6);
    c1.printNumber();

    complex c2(8);
    c2.printNumber();
    complex c3;
    c3.printNumber();
    
return 0;
}