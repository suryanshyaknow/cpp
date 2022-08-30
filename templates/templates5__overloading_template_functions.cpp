#include <iostream>
#include <string>
using namespace std;

void display(string a, string b)
{
    cout << a + b << endl;
    cout << "By the way, I'm just a conventional function..\n"
         << endl;
}

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << "I'm the templatized function.." << endl;
    cout << a << endl;
    cout << b;
    cout << "\n" << endl;
}

int main()
{
    display("suryansh", 'v');

    int a = 34;
    int b = 30;
    display(a, b);

    string s1 = "suryansh it is, ";
    string s2 = "vermillion, the lastname";
    display(s1, s2); // Exact match takes the highest priority..

    // by default these arguments are treated as the `char` by the compiler
    display("suryansh it is,", "vermillion, the surname");

    display(s1, "vermillion, the surname");

    return 0;
}