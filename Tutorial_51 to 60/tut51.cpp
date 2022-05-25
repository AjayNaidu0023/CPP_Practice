#include<iostream>
using namespace std;

class complex{
    int real, imaginary;    
    public: 
        void getData(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main (){

    complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(44,1);  --> is exactly same as  
    ptr->setData(44,1); // This is another type of pointer operator and called ***Arrow operator****

    // (*ptr).getData(); --> is as good as down
    ptr->getData(); //This is another type of pointer operator and called ***Arrow operator****
    


// Array of objects
    complex C2;
    complex *ptr1 = new complex[3];
    ptr1->setData(44,1);
    ptr1->getData();



return 0;
}