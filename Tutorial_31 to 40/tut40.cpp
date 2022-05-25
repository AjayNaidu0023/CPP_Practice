#include<iostream>
using namespace std;


class student {
    protected:
        int roll_number;
    public:
        void set_roll_Number(int);
        void get_roll_Number(void);

};

void student :: set_roll_Number(int r){
    roll_number = r;
}

void student :: get_roll_Number(){
    cout<<"The roll number is: "<<roll_number<<endl;
}

class exam: public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
        
};

void exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2; 
}
void exam :: get_marks(){
    cout<<"The marks obtained in physics is: "<<physics<<endl;
    cout<<"The marks obtained in maths is: "<<maths<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display(){
            get_roll_Number();
            get_marks();
            cout<<"Your percentage is: "<<(maths + physics)/2<<"%"<<endl;
        }
};
int main (){
    result lewis;
    lewis.set_roll_Number(44);
    lewis.set_marks(99.5, 95);
    lewis.get_roll_Number();
    lewis.get_marks();
    lewis.display();



    
return 0;
}