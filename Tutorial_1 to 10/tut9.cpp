#include <iostream>

using namespace std;

int main()
{

    // **********Selection Control Structure--->>If-Else if-else Ladder<<---***********

    // int age;
    // cout<<"Tell me your age"<<endl;

    // cin>>age;

    // if ((age<18) && ((age>0))){
    //     cout<<"You can not drive";
    // }

    // else if(age==18){
    //     cout<<"You can apply for DL";
    // }

    // else if(age<1){
    //     cout<<"You are not yet born";
    // }

    // else if ((age>18) && (age<=100)){

    //     cout<<"you already have a DL";
    // }

    // else if(age>100){
    //     cout<<"You are too old  to drive";
    //     }

    // else {
    //     cout<<"Wrong Input";
    // }

    // **********Selection Control Structure--->>Switch Case Statement<<---***********

    int age;

    cout << "Tell me your age" << endl;
    cin >> age;

    switch (age)
    {
    case 17:
        cout << "You are still under age" << endl;
        break;

    case 18:
        cout << "You are 18 and you apply for DL" << endl;
        break;
    case 19:
        cout << "You should've already appiled for DL" << endl;
        break;

    default:
        cout << "No special Cases" << endl;
        break;
    }

    cout << "came out of switchcase";

    return 0;
}