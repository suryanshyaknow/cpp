#include <iostream>
using namespace std;

//********************************* Pointers to Objects *************************************************
/*
As we already know pointers are used to store addresses of variables which have data types like int, float, double etc.
__> But pointer can also store the address of an object.
*/

class Complex
{
    int real, imaginary;

public:
    void setData(int, int);
    void getData();
};

void Complex::setData(int r, int comp)
{
    real = r;
    imaginary = comp;
}

void Complex::getData()
{
    cout << "\nThe real part of the desired complex number: " << real << endl;
    cout << "The imaginary part of the desired complex number: " << imaginary << endl;

    cout << "Desired Complex number: " << real << " + " << imaginary << "i" << endl;
}

int main()
{   
    Complex c1;
    // c1.setData(12, 19);
    // c1.getData();

    Complex *c2 = &c1; // I want to access the members of an object of the class (not necessarily c1) Complex by a pointer.
    (*c2).setData(12, 21);
    (*c2).getData();

    // We could very well use the new keyword/operator for the same purpose
    // Let's see..

    //*************************** Arrow operator: **********************************
    Complex *ptr = new Complex; 
    // (*ptr).setData(102, 119); is exactly freaking same as
    ptr->setData(102, 119);
    // (*ptr).getData(); as good as
    ptr->getData();


    //*************************** Array of Objects: *********************************
    Complex *arr = new Complex [4];
    
    // First Complex object:
    arr->setData(26, 1999);
    arr->getData();

    // Second Complex object:
    (arr+1)->setData(15, 1972);
    (arr+1)->getData();
    
    // Third Complex object:
    (arr+2)->setData(17, 1976);
    (arr+2)->getData();

    // Fourth Complex object:
    (arr+3)->setData(18, 2011);
    (arr+3)->getData();

    // Number of elements in an array:
    int arrLen = sizeof(arr)/ sizeof(arr[0]);
    cout << "The length of the array 'arr' is: " << arrLen << endl; // as expected wrong outcome!

    return 0;
}