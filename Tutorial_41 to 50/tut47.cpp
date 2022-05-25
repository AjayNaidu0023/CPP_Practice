#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
     --> Multiple Inheritance
    Q2. Which mode of Inheritance are you using?
    --> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of the
        simple and scientific calculator?
    -->
    Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }

    void performOperationSimple()
    {
        cout << "The value of a + b is " << (a + b)
             << "\nThe value of a - b is " << (a - b)
             << "\nThe value of a * b is " << (a * b)
             << "\nThe value of a / b is " << (a / b) << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }

    void performOperationScientific()
    {
        cout << "The value of cos(a) is: " << cos(a)
             << "\nThe value of sin(a) is " << sin(a)
             << "\nThe value of exp(a) is " << exp(a)
             << "\nThe value of tan(a) is " << tan(a) << endl;
        cout << "The value of cos(b) is: " << cos(b)
             << "\nThe value of sin(b) is " << sin(b)
             << "\nThe value of exp(b) is " << exp(b)
             << "\nThe value of tan(b) is " << tan(b) << endl;
    }
};

// *****Multiple Inheritance*****
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{

    // SimpleCalculator simcalculation;
    // simcalculation.getDataSimple();
    // simcalculation.performOperationSimple();

    // ScientificCalculator scicalculation;
    // scicalculation.getDataScientific();
    // scicalculation.performOperationScientific();

    HybridCalculator hycalculation;
    hycalculation.getDataScientific();
    hycalculation.performOperationScientific();
    hycalculation.getDataSimple();
    hycalculation.performOperationSimple();

    return 0;
}