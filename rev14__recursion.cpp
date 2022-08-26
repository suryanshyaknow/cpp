#include <iostream>
using namespace std;

//***************** Recursion: *********************************
/* Recursion ain't always good. By calling a single function repeatedly, it might increase the function overhead. */

long long int factorial(int); // prototyping
int fib(int);

void factorialOfFirstn(int n){
    for(int i = 1; i<=n; i++) {
        cout << "The factorial of " << i << " is: " << factorial(i) << endl; 
    }
}

// just a function to genetate a fibonacci series w the help of fib function
void genfib(int n) 
{   
    cout << "\nYour Fibonacci series is 'bout to be displayed: " << endl;
    int i = 0;
    do
    {
        cout << fib(i) << endl;
        i++;
    } while (i < n);
}

int main(){

    /* Note: from 20 onwards we'll start getting negative vals cuz *long long int* now no longer wouldn't be able to that 
    much large vals. */
    // cout << factorial(17) << endl;
    factorialOfFirstn(20); 

    //***************** Fibonacci Series: ************************
    genfib(20);

    return 0;
}

long long int factorial(int n){
    if (n == 0 || n == 1 ){
        return 1;
    } 
    return n * factorial(n-1);
}

int fib(int n){

    if (n <=1 )
    {
        return n;
    }
    else 
    {
        return fib(n-2) + fib(n-1);
    }
}
