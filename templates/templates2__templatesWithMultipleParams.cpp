// ------------------- Templates w Multiple Params: ---------------------------------------
/*
template <class T1, class T2>
class class_name
{
    // whatsoever!
};

__> Nothing Fancy, it's just that we can pass as many params of datatypes we wanna use.
*/

#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class MyClass
{
private:
    /* data */
    T1 data1;
    T2 data2;

public:
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void add(); // will define it out side the class
};

template <class T1, class T2>
void MyClass<T1, T2>::add()
{
    cout << data1 + data2 << endl;
}

int main()
{
    MyClass<int, double> obj(89, 9319113802);
    obj.add();
    MyClass<int, float> obj1(12, 12.8);
    obj1.add();
    MyClass<char, char> obj2('S', 'G');
    obj2.add();
    // MyClass<string, string> obj('Suryansh ', "Vermillion");
    // obj.add();
    return 0;
}
