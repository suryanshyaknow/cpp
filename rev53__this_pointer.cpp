#include <iostream>
using namespace std;

//***************************** this pointer ********************************************
/* `this` keyword is a pointer that points to the object that invoked the member function
of the class.

__> I think `this` is an python equivalent of `self`.

Commonly used when the name of a member of the class and the argument passed have same names.
__> Error won't be thrown but the garbage val will be displayed.
__> So we could use `this` pointer in these cases.
*/

class Luffy
{
    int a;

public:
    // void setData(int a)
    Luffy& setData(int a) 
    {   
        // a = a;
        // in this case priority is given to the local variable
        this->a = a;
        // a = a1; had the argument passed been `a1`
        /* if argument passed would've been `a1`, in that case too `this` is used.
        The only difference is that's being done by the compiler behind the scenes.
        */
       return *this;
    }
    void getData()
    {
        cout << a << endl;
    }
};

int main()
{   
    Luffy monkey;
    monkey.setData(1999).getData(); // because now `monkey.setData()` is an object too
    monkey.getData();

    return 0;
}