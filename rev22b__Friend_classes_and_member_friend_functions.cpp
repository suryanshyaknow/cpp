#include <iostream>
using namespace std;

//************************************************************************************************************
// This way gotta be followed:
//************************************************************************************************************

class Complex; // forward declaration

class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    // int sumRealComplex(Complex a, Complex b) // Coud've written like this!
    // But the compiler be like "What's the gurantee there's 'a' and 'b' in class Complex?!".
    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int n, c; // n for numerical part and c for complex part

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

    // Individually declaring member functions of another class as friends
    // friend int Calc::sumRealComplex(Complex, Complex);
    // friend int Calc::sumComComplex(Complex, Complex);

    // should we wanna have every member function of another class to have acces to the members of this class:
    friend class Calc; //makinfg friend outta whole class
};

// function for adding real parts of a Complex object:
int Calc::sumRealComplex(Complex a, Complex b)
{
    return a.n + b.n; // trying to access the private members of the class Complex
}

// function for adding complex parts of a Complex object:
int Calc::sumComComplex(Complex a, Complex b)
{
    return a.c + b.c; // trying to access the private members of the class Complex
}
int main()
{
    Complex c1, c2;
    int c3_sumreal, c4_sumcom;

    c1.setData(19, 19);
    c1.display();

    c2.setData(20, 20);
    c2.display();

    Calc cal;
    c3_sumreal = cal.sumRealComplex(c1, c2);
    cout << "c3 (sum of real parts of c1 and c2): " << c3_sumreal << endl;

    c4_sumcom = cal.sumComComplex(c1, c2);
    cout << "c4 (sum of complex parts of c1 and c2): " << c4_sumcom << endl;

    return 0;
}