#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ofstream out;
         out.open("sampletext62.txt");
         out << "This is me ";
         out.close();

         ifstream in;
         string st;
         in.open("sampletext62.txt");
        //  in>>st;
        //  cout<<st;

        while (in.eof() ==0 ){
            getline(in, st);
            cout<<st<<endl;
        }
         
    return 0;
}
