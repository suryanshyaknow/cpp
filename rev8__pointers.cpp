#include <iostream>
using namespace std;

int main()
{
    // What are the pointers?!
    // They are nothing but the datatypes which hold the addresses of the other datatypes.

    int a = 3;

    // * made var. b to be able to store the address of other variable.
    // &a indicates the address of the var. a.
    int *b = &a;

    // & ---> (Address of) operator
    // * ---> (Val at)|Dereference operator

    cout << "The val stored in b: " << b << endl;
    cout << "is same as 'The address of a': " << &a << endl;
    cout << "The val stored at the address stored in b: " << *b << endl;

    // *********** Pointer to Pointer: ***************
    /* Just making another var. c that is even able to hold the address of the var. b that is already
    storing an address of another var. a.
    i.e. var. c is a pointer now that holds the address of another variable.
    Nothing less and nothing more!
    */
    cout << "\nPointer to Pointer concept: " << endl;
    int **c = &b;

    cout << "\nThe val stored in c: " << c << endl;                      // obviously the address of the pointer b
    cout << "is same as 'The address of the pointer b': " << &b << endl; // to confirm the above statement
    cout << "The val stored at the address stored in c: " << *c << endl;
    cout << "The value at address stored in the pointer b, that c is pointing to: " << **c << endl;
    return 0;
}