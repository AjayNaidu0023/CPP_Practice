#include<iostream>
#include<fstream>

using namespace std;

/* The useful class for working with files in C++ are:
1. fstreambase
2. ifstream --> Derived from fstreambase
3. ofstream --> Derived from fstreambase

*** In ordre to work with files in C++, you will have to open it. Primarily, 
there are 2 types ways to open a file:

1. using the constructor
2. using the member function open() of the class
*/
int main (){
    string st = "Lewis Hamilton 44";
    string st2;
    //Opening files using constructor and writing it
    // ofstream out("sampletextfile60.txt"); //Write Operation
    // out<<st;

    //Opening files using constructor and reading it
    // ifstream in("sampletextfile60b.txt"); //Read Operation
    // // in>>st2;
    // getline(in, st2);
    // cout<<st2;

    
    
return 0;
}