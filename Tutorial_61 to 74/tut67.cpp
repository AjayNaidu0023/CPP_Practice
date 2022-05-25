#include <iostream>
using namespace std;

// float funAvg(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

// float funAvg(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template<class T>
void swap1 (T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
    

template<class T1, class T2>
float funAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main () {
    float a;

    a = funAvg(5,2.7);
    printf(" The average of these 2 numbers is: %.3f", a);

    int x = 4, y = 7;
    swap1(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;

}