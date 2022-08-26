#include <iostream>
using namespace std;

//************************************************************************************************************
// So this particular layout of member function of one class accessing private members of the other won't work.
//************************************************************************************************************

class Calc; // forward declaration

class Complex
{
    int n, c; // n for numerical part and c for complex part
    
    friend int Calc::sumRealComplex(Complex, Complex); // invalid use of incomplete type 'class Calc'
    // this probably means class Calc has to be completed before it tries whatever it wanna through the friend function.

public:
    void setData(int num, int com)
    {
        n = num;
        c = com;
    }
    void display()
    {
        cout << "Your desired complex number: " << n << " + i" << c << endl;
    }
};

class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex a, Complex b){
        return a.n + b.n; // trying to access the private members of the class Complex
    }
};

int main()
{
    Complex x, y;

    x.setData(19,19);
    x.display();

    y.setData(20,20);
    y.display();
    
    return 0;
}