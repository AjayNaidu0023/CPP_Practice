#include<iostream>
using namespace std;


class employee{
    int id;
    int salary;

    public:
        void setId(void){
            salary = 12212;
            cout<<"Enter the ID of employee"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"Employee ID: "<<id<<endl;
        }

        // void setSalary(void){
        //     cout<<"Enter the salary of employee: "<<id<<endl;
        //     cin>>salary;
        // }

        // void getSalary(void){
        //     cout<<"The salary of employee "<<id<<" is "<<salary<<endl;
        // }
};
int main (){

    employee number[4];

    for (int i = 0; i < 4; i++)
    {
        number[i].setId();
        number[i].getId();
        
    }

    
    return 0;
}