#include <iostream>
using namespace std;

// ******************************* Inline Functions: ***********************************************

/* The idea: Execution of functions involves somewhat a 2-3 stepped process viz. the CPU stores the memory address of the instruction following
the function call, copying the actual parameters to the formal ones, executing the code logic written inside the function and then finally 
transfers control to the specified function. This is by default, we can't make any changes in it whatsoever.
---> This can become overhead if the execution time of function is less than the switching time from the caller function to called function.

But if we have some functions that are too mainstream or pathetic at logic (and are called more than twice or thrice), we'd not want them to 
suffer through this whole process.
And to avoid that we have INLINE keyword that converts a regular function into an inline one.

---> For too bland functions like sum() or product(), what this keyword will do it, it will somehow reduce the function call overhead. 
---> Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline
function gets inserted or substituted at the point of inline function call.
---> This substitution is performed by the C++ compiler at compile time. 
---> Inline function may increase efficiency if it is small.

"Remember, inlining is only a request to the compiler, not a command. Compiler can very much ignore the request for inlining." 
WHERE THEY SHOULD NOT BE USED: 
---> When the function's logic is complex or otherwise the whole purpose of creating function is beaten.
---> Whenever static variables are used inside the function.
---> If a function contains a loop. (for, while, do-while)
---> If a function is recursive.
---> If a function return type is other than void, and the return statement doesn’t exist in function body.
---> If a function contains switch or goto statement.

"Kinda lambda equivalent of Python."
*/
inline int prod(float a, float b){
    return a*b;
}

//********************* Static Variables: ************************************************
inline int summer(int a, int b){
    static int c = 0; // This will be called once only during the very first function call.
    c = c + 1; // From now on the val of c wll be retained inside the function.

    return a+b+c;
    // The datatype of function will determine the type of result the function will give irrespective of the datatypes of the arguments passed. 
}

//********************* Constant Arguments: **********************************************
char strlen(const char* p) 
{
    /* basically commanding the compiler that we're only trying to retrive the len of the argument passed, kindly by no chance 
    do not make any change in my char p.
    */

}

int main(){

   float x = 10.79, y = 19.367;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;
   cout << "The product of x = " << x << " and y = " << y << " is: " << prod(x, y) << endl;

    int m = 12, n = 13;
    cout << "\nThe sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;
    cout << "The sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;
    cout << "The sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;
    cout << "The sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;
    cout << "The sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;
    cout << "The sum of m = " << m << " and n = " << n << " and c is: " << summer(m, n) << endl;

    return 0;
}