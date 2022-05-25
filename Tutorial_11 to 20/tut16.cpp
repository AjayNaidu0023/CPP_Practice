#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// this will not swap a and b
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by refernce using pointer
// void swapPointer(int* a, int* b){

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Call by refernce using C++ reference variable
void swapreferencevar(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 6;
    // cout<<"The sum of 4 and 6 will be "<<sum(4,6);
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    // swap(a,b); //This will not work
    // swapPointer(&a,&b);
    swapreferencevar(a, b);
    cout << "The value of a is " << a << " The value of b is " << b << endl;

    return 0;
}