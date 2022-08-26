#include <iostream>
using namespace std;

class Complex
{
    int n, c; // n for numerical part and c for complex part

public:
    void setData(int num, int com);
    void setDatabySum(Complex x, Complex y); // passing complex objects as arguments
    void display();
};

void
Complex::setData(int num, int com)
{
    n = num;
    c = com;
}

void Complex::setDatabySum(Complex x, Complex y)
{
    n = x.n + y.n;
    c = x.c + y.c;
}

void Complex::display() // May behave as member function overloader
{
    cout << "Your desired complex number: " << n << " + i" << c << endl;  
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(12, 19);
    c2.setData(19, 25);
    c3.setDatabySum(c1, c2);

    c1.display();
    c2.display();

    c1.display(); 
    
    return 0;
}