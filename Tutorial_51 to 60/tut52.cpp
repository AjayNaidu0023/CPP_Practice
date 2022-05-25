#include <iostream>
using namespace std;

class shop
{

    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData(void)
    {
        cout << "ID of this item is: " << id << endl;
        cout << "price of this item is: " << price << endl;
    }
};

int main()
{

    int size = 1;
    int *ptr = &size;
    int *ptr1 = new int[10];

    // General shop
    // Vegetable shop
    // Fruits shop

    shop *soap = new shop[size];
    shop *soaptemp = soap;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "The Id and price of item is " << i + 1 << endl;
        cin >> p >> q;
        (*soap).setData(p, q);
        soap++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        soaptemp->getData();
        soaptemp++;
    }

    return 0;
}