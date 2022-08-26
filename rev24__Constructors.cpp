#include <iostream>
using namespace std;

//**************************** Constructors: *****************************************************
/* Constructors are nothing but a way to initialize the objects of the class (similar to def __init__() in python)
without having to create a separate function for this shitty task.
--> Special member function with same name as of the class.
--> Will automatically be invoked once an object of class is declared.

Characteristics:
--> Should be declared inside the public section of the class.
--> Automatically invoked whenever the object is created.
--> Doesn't have any return type.
--> Can't return any value.
--> Can have default arguments.(Default Constructor)
--> We can't refer to its address.
*/

class Complex
{
    int n, c; // n for numerical part and c for complex part

public:
    Complex(int, int); // constructor declaration // seems it ain't so much fond of any datatype, not even void

    // void setData(int num, int com); // We'll use constructor in this case
    
    void setDatabySum(Complex x, Complex y); // passing complex objects as arguments
    void display();
};

// Complex::setData(int num, int com)
// {
//     n = num;
//     c = com;
// }

Complex::Complex(int num, int com) // Constructor function // PARAMETERIZED CONSTRUCTOR
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
    Complex c1(2, 9); // IMPLICIT CALL
    c1.display();

    Complex c2 = Complex(19, 27);
    c2.display();

    return 0;
}