#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    //Below line means that non member - sumComplex function is allowed to do 
    // anyhting with private data  
    friend complex sumComplex(complex o1, complex o2);
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();
    
    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    
    
    return 0;
}

/*
Properties of friend function

1.  Not in the scope of class
2. Since it is not  in the scope of the class, 
        it can not be called from that object of the -
           - class. c1.sumComplex() == Invalid.
3. can be invoked without the any help of the object 
4. Usullay contains the objects as arguments
5. can be decalred inside public or private section of the class 
6. It cannot access the members directly by their names and need 
        object_name.member_name to access any member


*/