#include <iostream>
using namespace std;

//**************************** Constructor Overloading: *************************************
/* Nothing just the notion of having more than one constructor in a class with same name,
as long as each has a different list of arguments.
--> And they are called accordingly w.r.t the number of arguments passed at time of an object declaration.
*/

class Complex
{
    int nat, com;

public:
    Complex()
    {
        nat = 0;
        com = 0;
    }
    Complex(int nat_)
    {
        nat = nat_;
        com = 0;
    }

    /* Note: If I put the default argument here for com_, compiler will throw an error because it will get 
    confused which constructor to call i.e the cosntructor w one argument or the one with having 
    two having one of them as default. 
    */
    Complex(int nat_, int com_) 
    {
        nat = nat_;
        com = com_;
    }
    Complex(Complex num1, Complex num2)
    {
        nat = num1.nat + num2.nat;
        com = num1.com + num2.com;
    }
    void display();
};

void Complex::display()
{
    cout << "Your desired Complex number: " << nat << " + i" << com << endl;
}

int main()
{
    Complex().display();
    Complex(34).display();
    Complex(37, 56).display();
    Complex(Complex(19, 79), Complex(34)).display();

    return 0;
}