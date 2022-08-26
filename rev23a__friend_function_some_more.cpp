#include <iostream>
using namespace std;

class Y; // to prevent compiler from having sudden shocks!

class X
{
    int data;
public:
    void setVal(int val)
    {
        data = val;
    }
    friend void add(X, Y);
};

class Y
{
    int value;
public:
    void setVal(int val)
    {
        value = val;
    }
    friend void add(X, Y);
};

void add(X x, Y y)
{
    cout << "The sum of x and y: " << x.data + y.value << endl;
}

int main()
{
    X x;
    Y y;

    x.setVal(1999);
    y.setVal(2000);

    add(x, y);

    return 0;
}