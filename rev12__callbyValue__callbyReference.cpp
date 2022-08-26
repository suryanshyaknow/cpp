#include <iostream>
using namespace std;

void swap(int a, int b) // Copying the vals of actual into formal params.
{ 
    int temp;
    temp = b;
    b = a;
    a = temp;
}

// Call by Reference (using pointers):
void swap_(int* a, int* b)  // making 'a' and 'b' able to store addresses by using *
{  
    // cout << "a: " << a << " b: " << b << endl;
    // cout << "*a: " << *a << " *b: " << *b << endl;

    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

// Call by Reference (using C++ reference variables):
void swapReferences(int &a, int &b)  // Now, the 'a' and 'b' are referencing to our original variables.
{  
    // cout << "Formal Parametres that are now Reference Operators: " << endl;
    // cout << "a: " << a << " b: " << b << endl;
    // // cout << "*a: " << *a << " *b: " << *b << endl;

    int temp;
    temp = b;
    b = a;
    a = temp;
}

int &swapReferences_(int &a, int &b)  // Making this function to return reference
{  
    // cout << "a: " << a << " b: " << b << endl;
    // cout << "*a: " << *a << " *b: " << *b << endl;

    int temp;
    temp = b;
    b = a;
    a = temp;

    return b;
}



int main(){
    int x = 26, y = 1999;
    // cout << "The vals before swap: x: " << x << " and y: " << y << endl;
    // swap(x, y);
    // cout << "The vals after swap: x: " << x << " and y: " << y << endl;
    // cout << " No changes whatsoever, as expected!"

    // To literally impart changes:
    //********************** Call by Reference (using Pointers): *********************************

    // cout << "The vals before swap: x: " << x << " and y: " << y << endl;
    // swap_(&x, &y); // passing references into the function rather than their vals. 
    // cout << "The vals after swap: x: " << x << " and y: " << y << endl;

    //********************* Call by Reference (using C++ reference variables): ********************

    cout << "The vals before swap: x: " << x << " and y: " << y << endl;
    swapReferences(x, y); // passing references into the function rather than their vals. 
    cout << "The vals after swap: x: " << x << " and y: " << y << endl;

    // Function returning reference:
    cout << "The vals before swap: x: " << x << " and y: " << y << endl;
    swapReferences_(x, y) = 369; // passing references into the function rather than their vals. 
    cout << "The vals after swap: x: " << x << " and y: " << y << endl;

    return 0;
}