# include <iostream>
using namespace std;

int main() {

    float a = 22.3;
    long double b = 33.87;

    // by default, if the val 22.3 (and not the variable a) is to be passed somewhere..
    // it will be interpreted as double by the compiler.

    // To resolve this, we can do typecasting by simple appending as f(or F) at the end..
    // decimal numbers if we desire floating point datatype.
    // And l(or L), if we desire long double.

    // *********** float, doubles and long doubles Literals: ****************************
    cout << "size of 22.3: " << sizeof(22.3) << endl; // double (by default)
    cout << "size of 22.3f: " << sizeof(22.3f) << endl; // float (by typecasting)
    cout << "size of 22.3F: " << sizeof(22.3F) << endl;
    cout << "size of 33.87: " << sizeof(33.87) << endl; // double (by default)
    cout << "size of 33.87l: " << sizeof(33.87l) << endl; // long double (by typecasting)
    cout << "size of 33.87L: " << sizeof(33.87L) << endl;

    // ************ Reference Variables **************************
    /*
    nothing but two vatiables pointing to the same location.
    */
    // Divyansh --> Divu --> DivyanshtheGreat (self-proclaimed)
    float divyansh = 99.99;
    // I want the 'divu' to refer to 'divyansh' too!
    float &divu = divyansh;

    cout << "\n divyansh: " << divyansh << endl;
    cout << "\n divu: " << divu << endl;

    // ****************** Typecasting: ****************************
    int x = 23;
    float y = 23.7;

    cout << "\ny: " << y << endl;
    cout << "typecasted y: " << int(y) << endl;
    cout << "x:" << x << endl;
    cout << "typecasted x: " << float(x) << endl;

    cout << "x + y: " << x+y << endl;
    cout << "x + int(y): " << x+int(y) << endl;



    return 0; 

}

