#include<iostream>
using namespace std;

// ********************** Function Templates ***************************
/*
Function Templates are nothing fancy they are exactly same as the conventional templates only with the
difference that templates here are being made for the function but classes.

__> In most cases, now that I know the concept of the templates, it'd be better if i can just implement it 
instead of overloading the functions or classes in cases just because I gotta use different datatypes in 
different scenarios.
*/

template <class T1, class T2>
// What if I actually want to parameterize the return type of a function template?
float add(T1 a, T2 b)
{
    return a + b;
}

template <class T>
void swap_(T &a, T &b)
{   
    T temp = a;
    a = b;
    b = temp;
}

int main()
{   
    float a;
    a = add(123, 45.6);
    cout << a << endl;
    cout << endl;
    
    char c1 = 's';
    char c2 = 'e';
    swap_(c1, c2); 
    cout << "c1 now: " << c1 << endl;   
    cout << "c2 now: " << c2 << endl;   
    
    return 0;
}