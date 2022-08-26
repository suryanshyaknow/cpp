#include <iostream>
using namespace std;

/* 
Should we declare our function before the main(), we gotta atleast inform the compiler before the main() of the same.
---> Function Prototyping
Otherwise we'll get error: 'function_name' was not declared in this scope. 

Trivia: Firstly, this concept was introduced in C++ then was adapted into C too.
*/

// float sum(int a, int b); ---> acceptable
// float sum(a, b); ---> not acceptable
float sum(float, float); // best approach
void hey(void);

int main(){
    
    float num1, num2;
    cout << "Enter integers: " << endl;;
    cin >> num1 >> num2; // num1 and num2 are the actual parameters.
    cout << "The desired sum: " << sum(num1, num2) << endl;

    hey();

    return 0;
}

// Formal parameters: Just serves the purpose of formality.
float sum(float a, float b) // a and b are formal parameters, and will take vals from the actual ones.
{   
    return a+b;
}

void hey(){
    cout << "Hey!" << endl;
}