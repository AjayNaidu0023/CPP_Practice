#include <iostream>
#include <cstring>

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
    virtual void display() {}
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

int main()
{
    string title;
    float rating, vlen;
    int words;

    //for CWH Video
    title = "CPP Tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo CPPvideo(title, rating, vlen);
    // video.display();

    //for CWH Text

    title = "CPP Tutorial Text";
    words = 44;
    rating = 4.49;

    CWHText CPPText(title, rating, words);
    CPPText.display();

    CWH *tuts[2];
    tuts[0] = &CPPvideo;
    tuts[1] = &CPPText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions 
1. They can't be static 
2. They are accessed by objects pointer
3. Virtaul functions can be friend of another class
4. A Virtaul Function in base class might not be used 
5. A Virtaul Function defined in the base class There is not necessity of redefining it in 
     the derived class
 
*/