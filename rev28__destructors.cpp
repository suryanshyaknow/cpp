#include <iostream>
using namespace std;

//****************************************** Destructors: *****************************************************************

/* A Destructor is a type of function which is called whenever the object is to be destroyed.
--> Object is to be destroyed when compiler firmly believes that there'i's no further need for that certain object.
--> Destructor neither takes an argument nor does it returns any value.

==> The main function of the Destructor is to free up the memory ocuupied by the constructor.
*/

class Num
{

    static int count; 

public:
    Num()
    {
        count++;
        cout << "Contructor invoked!" << endl;
    }
    ~Num()
    {
        count--;
        cout << "Time where the Destructor gets into the picture. Destroyed!" << endl;
    }
};

int Num::count = 0;

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating our first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block.."<<endl;
        cout<<"Creating two more objects.."<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to the main"<<endl;

    return 0;
}