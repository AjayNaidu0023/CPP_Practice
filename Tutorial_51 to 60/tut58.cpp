/*
There is not much difference in this and tut57.cpp the only difference is 
in this we have used Pure Virtual function inside class

******* Pure Virtual Class *******

Pure virtual function is a function that doesn’t perform any operation and the function is 
declared by assigning the value 0 to it. Pure virtual functions are declared in abstract 
classes.

******* Abstract base Class *******
Abstract base class is a class that has at least one pure virtual function in its body. 
The classes which are inheriting the base class must need to override the virtual function of 
the abstract class otherwise compiler will throw an error.

*/
#include<iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string  s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; //DO-NOTHING-Function --> Pure Virtual Function
};

class CWHVideo : public CWH
{

    int videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {

        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with Title"
             << "\nRatings: " << rating << " Out of 5 stars"
             << "\nLength of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{

    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {

        words = wc;
    }
    void display()
    {
        cout << "This is an amazing video with Title"
             << "\nRatings: " << rating << " Out of 5 stars"
             << "\nNo of words in this tutorial is: " << words << " words" << endl;
    }
};

int main (){
    
return 0;
}