#include <iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE(COMMA SEPARATED) PARAMETERS (ONE, TWO OR MORE THAN TWO)
template <class T1, class T2>
class name of the class {

    // Body
}
*/

template <class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;
        
        myclass(T1 a, T2 b){
            
            data1 = a;
            data2 = b;
        }

        void display(void){
            cout<<this->data1<<endl<<this->data2;
            }
}; 
int main () {

    myclass<int ,float> obj(1 ,1.2);
    obj.display();

return 0;

}