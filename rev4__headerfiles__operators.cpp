// There are two types of Header files:
// i.) System Header Files: Comes with the compiler.
# include <iostream>

// ii.) User-defined Header files: Written by the programmer.
// #include "this.h" //--> must be present inside the current directory.

using namespace std;

int main(){

    int a = 4, b = 5;

    // Arithmetic Operators:
    cout<< "Following are the operators in the C++: " << endl;

    cout << "a + b: " << a+b << endl;     
    cout << "a - b: " << a-b << endl;
    cout << "a * b: " << a*b << endl;
    cout << "a / b: " << a/b << endl; // we'll get integer as an output no matter what!
    cout << "a % b: " << a%b << endl;
    cout << "a++: " << a++ << endl; // print then increement // 4 // 5
    cout << "a--: " << a-- << endl; // 5 // 4
    cout << "++a: " << ++a << endl; // increement then print // 5
    cout << "--a: " << --a << endl;

    // Assignment Operators

    // Comparison Operators:
    cout << "\nFollowing are the Comparison Operators are in C++: " << endl;
    
    cout << "a == b: " << (a==b) << endl;
    cout << "a != b: " << (a!=b) << endl;
    cout << "a < b: " << (a<b) << endl;
    cout << "a <= b: " << (a<=b) << endl;
    cout << "a > b: " << (a>b) << endl;
    cout << "a >= b: " << (a>=b) << endl;

    // Logical Operators:
    cout << "\nFollowing are the Logical Operators are in C++: " << endl;

    cout << "((a == b) && (a < b)): " << ((a == b) && (a < b)) << endl; // AND Operator
    cout << "((a == b) || (a < b)): " << ((a == b) || (a < b)) << endl; // OR Operator
    cout << "!(a == b): " << !(a == b) << endl; // NOT Operator

    // Insertion and Extraction Operatoes:
    /* 
    << --> Insertion Operator: Inserts values into the stream.
    >> --> Extraction Operator: Extract the values inputted by the user.
    */
    

    return 0;
}