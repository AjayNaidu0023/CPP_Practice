#include <iostream>

#include <fstream>

using namespace std;

int main()
{

    // // Connecting with our hout stream

    ofstream hout("sample61.txt");

    // // Creating a name string variable entered by the user

    cout << "Enter your favourite driver name " << endl;

    // // Creating a name string and filling it with the string entered by the user

    string name;

    cin >> name;

    // // Writing a string to the file

    hout << "My favourite driver is: " << name;

    hout.close();

    ifstream hin("Sample61.txt");

    string content;

    // getline(hin, content); //Commented this line because it was giving error if you want to

    // run the code uncomment this than it'll work perfectly fine

    hin >> content;

    cout << "The content of this file is: \n"
         << content << endl;

    return 0;
}