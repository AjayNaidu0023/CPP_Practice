#include <iostream>
#include <vector>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}
int main()
{
    // 6 7 8 9
    list<int> list1;     // List of zero length
    list1.push_back(5);
    list1.push_back(8);
    list1.push_back(6);
    list1.push_back(3);

    //****Removing elements from list*********
    //list1.pop_front();
    // list1.pop_back();
    // list1.remove(9);
    // list1.sort();
    // display(list1);


    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    // iter++;
    // cout<< *iter<<endl;

    list<int> list2(3); // List of 0 length
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 44;
    iter++;
    *iter = 56;
    iter++;

    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);

    //reversing the list
    list1.reverse();
    display(list1);
    return 0;
}   