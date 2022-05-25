#include <iostream>
using namespace std;

// ***********Structure Data Type***********

typedef struct employee
{
    string name;
    int eID;
    char favchar;
    float salary;

} ep;

// ***********Union Data Type***********

// In union I can only use one type of data at a time ***** this is because for better memory management

union money
{

    int rupee;
    char dollar;
    float euro;
};

int main()
{

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << "Enum allocates number to breakfast as: " << breakfast << endl;
    cout << "Enum allocates number to lunch as: " << lunch << endl;
    cout << "Enum allocates number to dinner as: " << dinner << endl;

    // Union with Money
    // If we add another data in Union it gives correct data for latest one and gives garbage data for the earlier one

    // union money price;
    // price.rupee = 100;
    // cout<<price.rupee<<endl;

    // Structure with employee

    // struct employee lewis;
    // lewis.name = "Lewis Hamilton";
    // lewis.eID = 44;
    // lewis.favchar = 'H';
    // lewis.salary = 6000;

    // cout<<"Name: "<<lewis.name<<endl;
    // cout<<"Employee ID: "<<lewis.eID<<endl;
    // cout<<"Favorite Character: "<<lewis.favchar<<endl;
    // cout<<"Salary: "<<lewis.salary<<endl;

    // **********Union Data Type**********

    return 0;
}
