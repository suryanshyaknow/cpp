#include<iostream>
using namespace std;

//******************** Structures: ********************************
/* Up until now we were using arrays when we had to store a collection of elements of the exact same
datatype. 
But what now, if I want to store a collection of data but I want its elements to have different datatypes. 
For that we have Structures.

A STRUCTURE is a user-defined data type in C/C++. 
A structure creates a data type that can be used to group items of possibly different types into a single type.

Let's have a glance over 'em..
*/
struct employee
{
    /* data */
    int eId;
    float salary;
    bool loves_anime;        
};

// typedef is a keyword that is used to assign a new name to any existing data-type.
// An easy approach you could say:
typedef struct whatever
{
    /* data */
    bool loves_anime;
    float sal = 10000000;
} whatever;
// So now we have created a datatype 'whatever' which can be used to group boolean and float datatypes into itself.


//******************** Unions: ********************************
/* UNIONS is another user-defined datatype that is ALMOST SAME as Structures.

Difference: They provide better MEMORY MANAGEMENT.
--> Unlike Structures they do not impart discrete block of memory to each dataype contained in it.
--> Rather they just share memory among each other.
--> The (block of memory) = (memory required by the datatype having largest size) will be shared by all the datatypes contained in a union.

--> Each time a new variable is initialized from the union it overwrites the variable used prior to it.
--> This is most useful when the type of data being passed through functions is unknown, using a union which contains all possible 
    data types can remedy this problem.
*/
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    
    // struct employee spidey;
    // spidey.eId = 113;
    // spidey.salary = 10000000; //expected
    // spidey.loves_anime = true;

    // cout << "spidey.eId: " << spidey.eId << endl;
    // cout << "spidey.salary: " << spidey.salary << endl;
    // cout << "spidey.loves_anime: " << spidey.loves_anime << endl;

    // cout << "\n";

    // whatever suryansh;
    // suryansh.loves_anime = true;
    // suryansh.sal = 20000000;

    // cout << "suryansh.loves_anime: " << suryansh.loves_anime << endl;
    // cout << "suryansh.sal: " << suryansh.sal << endl;

    //********************************** Union: **********************************************
    union money m1;
    m1.rice = 32;
    m1.car = 'm';
    m1.pounds = 256.56;

    cout << "m1.rice: " << m1.rice << endl; // I'm getting now garbage val for m1.rice once the m1.car is declared.    
    cout << "m1.car: " << m1.car << endl; // now same goes for m1.car once m1.pounds gets declared.
    cout << "m1.pounds: " << m1.pounds << endl;

    //********************************** Enum: ************************************************
    /* Enums are user-defined types that consist of NAMED INTEGERAL CONSTANTS.
    They help to assign constants to a set of names to make the program easier to read, maintain and understand.
    */
   enum anime {dragonballz, naruto, aot, onepiece, caseclosed, mha, demonslayer};
   anime fav1 = onepiece;
   anime watch_next = caseclosed; 
   cout << "Most favourite anime as of now: " << fav1 << endl;
   cout << "Anime I'm gonna watch next: " << watch_next << endl;

    return 0;
}