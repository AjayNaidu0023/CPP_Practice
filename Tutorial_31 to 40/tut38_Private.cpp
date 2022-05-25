#include <iostream>
using namespace std;

class base
{

    int data1; // it is private by default
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base ::setData(void)
{
    data1 = 1;
    data2 = 2;
}

int base ::getData1()
{
    return data1;
}
// int base :: getData2(){
//     return data2;
// }


class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::display()
{
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}

void derived ::process()
{
    data3 = data2 * getData1();
}

int main()
{

    derived der;
    // der.setData();
    der.process();
    der.display();

    return 0;
}