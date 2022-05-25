#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {95, 88, 90, 78};
    // int marks[4]={89,97,92,75}

    int socialmarks[2];
    socialmarks[0] = 65;
    socialmarks[1] = 55;
    socialmarks[2] = 44;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // with FOR loop

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // with WHILE loop

    // int i =0;
    // int marks[4]={95,88,90,78};
    // while (i<4)
    // {
    //     cout<<i<<" has this number "<<marks[i]<<endl;
    //     i=i+1;

    // }

    // cout<<"These are social marks"<<endl;
    // cout<<socialmarks[0]<<endl;
    // cout<<socialmarks[1]<<endl;
    // socialmarks[2]=45;
    // cout<<socialmarks[2]<<endl;

    // **********Pointers and arrays***********

    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}