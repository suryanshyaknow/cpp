# include <iostream>
using namespace std;

int glo = 100;

/* Scope:
When we declare a program element such as a class, function, or variable, its name can only be "seen" and used in 
certain parts of our program. The context in which a name is visible is called its scope. */

void glo_() {
    cout << "\nEither I'm the glo in void() scope and if not, I am the one from the global scope. My val: " << glo << endl;
}

int main() {
    int glo = 98;

    cout << "I am the glo present in the main() scope. My val: " << glo << endl;
    
    glo_(); // Got nothing to with the main scope!

    // Eventually, now we wanna access the global val of glo..
    // for that, we could use SCOPE RESOLUTION Operator i.e. "::"

    cout << "\nI am the Global variant of glo (accessed by scope resolution operator). My val: " << ::glo << endl; 

    return 0;
}