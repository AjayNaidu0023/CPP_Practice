#include<iostream>
using namespace std;


class sample{

    private:

        int health; 
        int level;

    public:

    int getLevel()
    {
        return level;
    }
    
    void setLevel(int lv)
    {
        level = lv;
    }


};
int main (){

    sample ab;

    ab.getLevel();

    cout<<ab.getLevel()<<endl;

    ab.setLevel(100);

    cout<<"The level: "<<ab.getLevel()<<endl;
      
return 0;
}