#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function Objects(Functor): Functions wrapped in a class so that it available like an object
    
    
    int arr[] = {1, 2, 3, 44, 55, 77, 99};
    sort(arr, arr+6, greater<int>());
    // sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}