#include <iostream>
using namespace std;

class Complex
{
    int n, c; // n for numerical part and c for complex part

public:
    void setData(int num, int com);
    friend Complex sumComplex(Complex, Complex); // seeking that persmission!
    void display();
};

void Complex::setData(int num, int com)
{
    n = num;
    c = com;
}
void Complex::display()
{
    cout << "Your desired complex number: " << n << " + i" << c << endl;
}

//******************************** Friend Function: *********************************************************

/* This function is trying to access the provate members of the class Complex so obviously, compiler is gonna
throw some errors.
--> This ain't no joke.
--> This function gotta take permission from the class Complex to have access to the class' private members.
--> Even after getting permission, that doesn't mean that this function'd become the member function of the 
class Complex.
*/
Complex sumComplex(Complex a, Complex b)
{
    Complex c3;
    c3.n = a.n + b.n;
    c3.c = a.c + b.c;

    // c3.display();
    return c3;
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(12, 19);
    c1.display();

    c2.setData(19, 25);
    c2.display();

    c3 = sumComplex(c1, c2);
    cout << "c1 + c2: " << endl;
    sumComplex(c1, c2).display(); // or c3.display()

/*
    Properties of the Friend function:
---> Not the (literal)part or in the scope of the class.
---> Since it's not in the scope of the class, it can't be called from the object of that class.
    i.e. c1.sumComplex() = Invalid.
---> Can be invoked w/o the help of any object. {because it's a funciton not a member function}
---> Usually contains the object as arguments.
---> Can be declared inside the public or private scope of the class.
*/

    return 0;
}