#include <iostream>
using namespace std;

//******************************* Function Overloading: ********************************************

/* Basic idea: Same function can be used for different tasks.

Function overloading is a feature of object-oriented programming where two or more functions can have the same name 
but different parameters.
--> When a function name is overloaded with different jobs it is called Function Overloading.
--> Conventionally, in Function Overloading “Function” name should be the same and the arguments should be different.
*/

int add(int a, int b){
    cout << "\nMy purpose is Addition" << endl;
    return a+b;
}

int add(float a, float b, float c){
    cout << "\nMy purpose is to Add 3 integers!" << endl;
    return a+b+c;
}

char add(char a, char b){
    cout << "\nMy purpose is Concatenation" << endl;
    return a+b; // concatenation
}

int main(){
    
    cout << add('T', 'y');
    cout << add(23, 45);
    cout << add(34.5, 89.4535135, 340);
    cout << add('a', 'b', 'c'); // We can interpret that compiler possesses somwhat intelligence.
    return 0;
}