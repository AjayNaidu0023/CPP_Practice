#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associate array
int main()
{
    map<string, int> marksMap;

    marksMap["Lewis"] = 99;
    marksMap["Max"] = 80;
    marksMap["George"] = 82;

    marksMap.insert({{"Kozumes", 169}, {"kuroo", 187}});
        map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }


    cout<<"The size is "<<marksMap.size()<<endl;
    cout<<"The empty's retutn value is "<<marksMap.empty()<<endl;
    cout<<"The max size is "<<marksMap.max_size()<<endl;
    return 0;
}