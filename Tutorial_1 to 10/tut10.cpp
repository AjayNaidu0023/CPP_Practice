#include <iostream>
using namespace std;

int main()
{

    /* loops in C++
    There are 3 types of loops in C++

    1. For loop
    2. While loop
    3. Do-While loop
    */

    // In this you have to do this 100 times to get 1-100 number
    //    int i =1;
    //    cout<<i;
    //    i++;

    // *******FOR LOOP**************

    // Syntax for FOR LOOP
    // for(initialization; condition; Updation)
    // {
    //  Loop body(C++ code)
    // }

    // int i =1;
    // for ( i = 0; i < 101; i++)
    // {
    //     cout<<i<<endl;
    // }

    // return 0;

    // **********While loop********

    // while loop in C++
    // Syntax

    /*While(conditions)
    {
        C++ statements
    }*/

    // Printing 1 to 40 using while loop

    // int i = 1;
    // while(i<=44){

    //     cout<<i<<endl;
    //     i++;
    // }

    // ***********Do While************
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<40);

    // int i =6;
    // while(i<=60){
    //     cout<<i<<endl;
    //     i+6;

    // }

    // Multiplication table with FOR loop ************
    // for (int i = 0; i<=10; i++ ){
    //     cout<<i*6<<endl;

    // }

    // Multiplication table with WHILE loop ************
    int i = 1;
    while (i <= 10)
    {
        cout << i * 6 << endl;
        i++;
    }

    return 0;
}
