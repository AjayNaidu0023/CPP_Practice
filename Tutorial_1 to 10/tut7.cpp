#include <iostream>

using namespace std;

int c = 44;

int main()
{
    // *********Built-in data types***********
    // int a, b, c;
    // cout<<"Please give the a number\n";
    // cin>>a;
    // cout<<"Please give the b number\n";
    // cin>>b;
    // c = a+b;
    // cout<<"The sum of a + b is: "<<c<<endl;
    // cout<<"The global value of c is: "<<::c;
    // cout<<"The global value of c is: ***"<<::c;****

    // If we want to bring the data from global variable we have to bring in scope resolution operators '::'

    // ********* Float, Double, long Double, Literals  ***********

    // float g = 44.44f;
    // long double h = 1.1111l;
    // cout<<"The value of g is: "<<g<<" this is a float"<<"\nThe valule of h is: "<<h<<" this is a long double";
    // cout<<"The size of 44.44 is "<<sizeof(44.44)<<endl;
    // cout<<"The size of 44.44f is "<<sizeof(44.44f)<<endl;
    // cout<<"The size of 44.44F is "<<sizeof(44.44F)<<endl;
    // cout<<"The size of 44.44l is "<<sizeof(44.44l)<<endl;
    // cout<<"The size of 44.44L is "<<sizeof(44.44L)<<endl;

    // ***********Refernce Variable**************

    // float z = 44;
    // float & y = z;
    // cout<<z<<endl;
    // cout<<y<<endl;

    // ************Typecasting************

    int r = 01;
    float e = 11.23;
    cout << "The value of r is " << (float)r << endl;
    cout << "The value of e is " << (int)e << endl;

    int w = int(e);

    cout << "The Expression is " << r + e << endl;
    cout << "The Expression is " << r + int(e) << endl;
    cout << "The Expression is " << r + (int)e << endl;

    return 0;
}
