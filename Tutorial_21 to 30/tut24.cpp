#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of this employee is " << id << " and this employee number "
             << count << endl;
    }

    static void getcount(){
        cout<<"The value of count is: "<<count<<endl;
    } 
};

// Count is static data member data of class employee
int employee::count = 100; // default value is zero

int main()
{

    employee lewis, george, toto;
    // lewis.id = 44;
    // lewis.count = 1; cannot do like this as id and count are in private

    lewis.setData();
    lewis.getData();
    employee::getcount();

    george.setData();
    george.getData();
    employee::getcount();

    toto.setData();
    toto.getData();
    employee::getcount();
    return 0;
}