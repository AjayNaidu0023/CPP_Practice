#include <iostream>
#include <vector>

using namespace std;

template<class T>

void display(vector<T> &v)
{   
    cout<<"Displaying this vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{   
    //*****Ways to create vector *******

    vector<int> vec1; //zero length integer vector
    vector<char> vec2(4); //4 Element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); //4 Element character vector from vec2
    // display(vec3);
    vector<int> vec4(12, 44); //6 element vector 3s
    display(vec4);
    cout<<vec4.size();


    int element, size=5;
    // cout<<"enter the size of your vector: ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    

    // display(vec1);
    // vector<int> ::iterator iter = vec1.begin();
    // // vec1.insert(iter+size,100, 44);
    // display(vec1);

    return 0;
}