#include <iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "summing the value of X and Y: " << o1.data + o2.num<< endl;
}
int main()
{

    X n1;
    n1.setValue(5);
    Y n2;
    n2.setValue(6);

    add(n1, n2);

    return 0;
}