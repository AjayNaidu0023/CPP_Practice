#include <iostream>
using namespace std;

class point
{

    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint(void)
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
int main()
{

    point a(1, 1);
    point d(1, 2);

    a.displayPoint();
    d.displayPoint();

    return 0;
}