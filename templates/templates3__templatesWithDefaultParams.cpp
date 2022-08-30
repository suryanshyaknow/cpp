#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char, class T3 = float>
class vermillion
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

    vermillion(T1 a, T2 b, T3 c)
    {
        this->data1 = a;
        this->data2 = b;
        this->data2 = c;
    }
    void display()
    {
        cout << "a: " << this->data1 << endl;
        cout << "b: " << this->data2 << endl;
        cout << "c: " << this->data3 << endl;
    }
};

int main()
{
    vermillion <> f(12, 'v', 23.9);
    f.display();
    cout<< endl;
    vermillion <char, char, int> f1('s', 'g', 12);
    f1.display();
    cout<< endl;
    vermillion <int, int, int> f2(26, 11, 1999);
    f2.display();

    return 0;
}