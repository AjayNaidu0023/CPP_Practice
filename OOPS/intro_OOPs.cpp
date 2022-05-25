#include <iostream>
#include <cstring>
using namespace std;

class hero
{

    // Properties
    // for empty class C++ always gives 1 byte to identify and keep of track of class
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    hero()
    {
        cout << "simple Constructor Called" << endl;
        name = new char[100];
    }

    
    //**** Parameterized constructor ****

    hero(int health)
    {
        cout << "this-> \n"
             << this << endl;
        this->health = health;
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    //****  Copy constructor ****

    hero (hero& temp){

        char *nc = new char[strlen(temp.name)];
        strcpy(nc, temp.name);
        this-> name=nc;
        cout<<"Copy constructor called"<<endl;     
        this->health = temp.health; 
        this->level = temp.level;
    }

    void print()
    {
        cout << "Name:   " << this->name << endl;
        cout << "Level:  " << this->level << endl;
        cout << "Health: " << this->health << endl;
        cout<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char lv)
    {
        level = lv;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~hero(){
        cout<<"Destructor has been called"<<endl;
    }
};

// **** Static member ****

int hero:: timeToComplete = 5;

int main()
{   

    cout<<hero::random()<<endl;










    // *****recommended to call static members like this *****
    // cout<< hero:: timeToComplete<<endl;

    // // **** not recommended to call inside object like this*****
    // hero a;

    // cout<<a.timeToComplete<<endl;

    // hero b;

    // b.timeToComplete = 8;

    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;





    //  **Static**
    // hero toto;

    // // Dynamic
    // hero *mick = new hero();
    // // Manually calling destructor
    // delete mick;






    // hero senna;
    // senna.setHealth(100);
    // senna.setLevel('A');
    // char name[6] = "senna";
    // senna.setName(name);

    // senna.print();

    // // Using default copy constructor

    // hero lewis_hamilton(senna);
    // // hero lewis_hamilton = senna

    // lewis_hamilton.print();

    // // Changing name 

    // senna.name[0] = 'Z';
    // senna.print();

    // hero james(81, 'C');
    // james.print();

    // hero bond(james);
    // bond.print();

    // hero bottas(85);
    // // cout<<"Address of ramesh \n"<< &bottas<<endl;
    // bottas.getHealth();
    // bottas.setLevel('B');
    // bottas.getLevel();
    // bottas.print();

    // hero *lando = new hero(89);
    // lando->print();

    // hero temp(0, 'F');
    // temp.print();

    /*
    // static allocation
    hero vettel;

    cout<<"Health of vettel is: "<<vettel.health<<endl;
    cout<<"Level of vettel is: "<<vettel.getLevel()<<endl;

    // Dynamically Allocation

    hero *kimi = new hero;

    kimi->setHealth(99);
    kimi->setLevel('A');

    // Dereference by dot operator
    cout<<"Health of kimi is: "<<(*kimi).health<<endl;
    cout<<"Level of kimi is: "<<(*kimi).getLevel()<<endl;

    // this is another type of calling data by -> arrow

    cout<<"Health of kimi is: "<<kimi->health<<endl;
    cout<<"Level of kimi is: "<<kimi->getLevel()<<endl;

    */

    // Creation of object
    // hero lewis;

    // cout<<"health of lewis, here we get garbage value as we have not set any health for the object:\n"<<lewis.getHealth()<<endl;

    // lewis.setHealth(100);

    // cout<<"Lewis health after setting from setter:\n"<<lewis.getHealth()<<endl;

    // cout<<"Level of lewis, here we get garbage value as we have not set any health for the object\n"<<lewis.getLevel()<<endl;

    // lewis.setLevel('A');

    // cout<<"Lewis Level after setting from setter:\n"<<lewis.getLevel()<<endl;

    // // cout<<"Size: "<<sizeof(lewis)<<endl;
    return 0;
}