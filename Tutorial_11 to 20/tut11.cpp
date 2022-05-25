// In this we have used user snippet to bring following standard code of header file and and stnadard namespace and int main

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        cout << i << endl;

        if (i < 5)
        {
            continue;
        }
    }

    return 0;
}