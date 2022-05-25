#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "using func with 2 arguments" << endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout << "using func with 3 arguments" << endl;
    return a + b + c;
}

// calculate the volume of cylinder
int volume(double r, int h)
{
    cout << "Using cylinder calculation" << endl;
    return (3.14 * r * r * h);
}

// calculate the volume of rectangle
int volume(int l, int w, int h)
{
    cout << "Using rectangle calculation" << endl;
    return (l * w * h);
}

// calculate the volume of area
int volume(int a)
{
    cout << "Using area calculation" << endl;
    return (a * a * a);
}

int main()
{

    // cout<<"The sum of 3 and 7 is: "<<add(3, 7)<<endl;
    // cout<<"The sum of 3, 7 and 9  is: "<<add(3, 6, 3)<<endl;

    // ********volume of cylinder**********

    // int r,h;
    // cout<<"Enter the radius: "<<endl;
    // cin>>r;
    // cout<<"Enter the Height: "<<endl;
    // cin>>h;
    // cout<<"Volume of cylinder is: "<<volume(r, h)<<endl;

    // *********Volume of rectangle**********

    // int l,w,h;
    // cout<<"Enter the Length: "<<endl;
    // cin>>l;
    // cout<<"Enter the width: "<<endl;
    // cin>>w;
    // cout<<"Enter the Height: "<<endl;
    // cin>>h;
    // cout<<"Volume of cube is: "<<volume(l, w, h)<<endl;

    // **********Volume of area***********

    int a;
    cout << "Enter the area: " << endl;
    cin >> a;
    cout << "The volume of " << a << " mm area is " << volume(a) << "mm" << endl;

    return 0;
}