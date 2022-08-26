#include <iostream>
#include <string>
using namespace std;

class Nami;

class Rangiku
{
    string r;
    friend void swap (Rangiku &, Nami &);
public:
    void setVal(string val)
    {
        r = val;
    }
    void getVal()
    {
        cout << r << endl;
    }
};

class Nami
{
    string n;
    friend void swap (Rangiku &, Nami &);
public:
    void setVal(string val)
    {
        n = val;
    }
    void getVal()
    {
        cout << n << endl;
    }
};

void swap(Rangiku &ra, Nami &na) // friend of both the classes
{
    string temp;
    temp = ra.r;
    ra.r = na.n;
    na.n = temp;
}

int main()
{
    Rangiku o1;
    o1.setVal("Rangiku");

    Nami o2;
    o2.setVal("Nami");

    swap(o1, o2);

    cout << "Their vals after exchanging: Rangiku o1: ";
    o1.getVal();
    cout << "Nami o2: ";
    o2.getVal();

    return 0;
}