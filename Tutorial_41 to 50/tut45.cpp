#include <iostream>
using namespace std;

/*
Student --> Test
Student --> Sports
Test & Sports --> Result
*/
class student
{

protected:
    int roll_no;

public:
    void set_Number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};

class test : virtual public student
{

protected:
    float maths, physics;
public:

    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "Your marks in MATHS & PHYSICS " << endl
             << "Your marks in MATHS is: " << maths << endl
             << "Your marks in PHYSICS is: " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;
public:

    void set_score(float s)
    {
        score = s;
    }

    void print_score(void)
    {
        cout << "your score in sports is: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is: " << total << endl;
    }
};

int main()
{

    result lewis;

    lewis.set_Number(44);
    lewis.set_marks(85, 88);
    lewis.set_score(99);
    lewis.display();
    return 0;

}