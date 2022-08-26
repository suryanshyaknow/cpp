#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number()
    {
        num = 0;
    };

    Number(int n)
    {
        num = n;
    }

    // NOTE: When we define no copy constructor, compiler provides us with its own..
    // Number(Number &obj)
    // {   
    //     cout << "\nCopy Constructor called!" << endl;
    //     num = obj.num; // pretty much straight forward
    // }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number a, b, c(1999), c1;

    cout << "a: " << " ";
    a.display();

    cout << "b: " << " ";
    b.display();

    cout << "c: " << " ";
    c.display();

    // Now here we want d to exactly resemble object c..
    Number d(c); // copy constructor invoked!
    cout << "d: " << " ";
    d.display(); 

    c1 = c; // copy constructor wo'nt be called here
    // Because it has already been called when the object was delared initially.
    cout << "c1: " << " ";
    c1.display();

    Number c2 = c; // copy contructor will be invoked beacause c2 is being declared on the spot
    cout << "c2: " << " ";
    c2.display();

    // In case we haven't made the copy constructor:
    Number c_(2000);
    Number d1(c_); // Compiler's default copy constructor will be invoked!
    cout << "d1: " << " "; 
    d1.display();

    return 0;
}