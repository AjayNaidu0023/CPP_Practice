#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;

    // cout<<"The value of a is: "<<a
    //     <<"\nThe address of a is: "<<ptr<<endl;

    cout << "The va;ue of a is " << *(ptr) << endl;

    // New Keyword
    float *p = new float(44.44);
    cout << "The address of p is: " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 1; 
    arr[1] = 44; 
    arr[2] = 7; 
    delete[] arr;

    cout<<"The value of arr[0] is: "<< arr[0] << endl;
    cout<<"The value of arr[1] is: "<< arr[1] << endl;
    cout<<"The value of arr[2] is: "<< arr[2] << endl;

    return 0;
}