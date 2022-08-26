#include <iostream>
using namespace std;

//*************************** Static Members: ****************************************************************
/*
In very layman terms, STATIC MEMBERS are used to retain some kinda var val across new objects from the prior ones.

A static member has certain special characteristics. These are:

---> Only one copy of that member is created for the entire class and is shared by all the objects of that
class, no matter how many objects are created.
---> It is initialized before any object of this class is being created, even before the main starts.
---> It is visible only within the class, but its lifetime is the entire program.
*/

class Employee
{
    long long int id;
    static int count; // the retained val will be shared by each new object.
public:
    void setData()
    {
        cout << "\nEnter the employee's id: " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is: " << id << endl;
        cout << "Count: " << count << endl;
    }
    static void getCount()
    {
        cout << "Hey! Hey! I'm here to access the static members but I can't access any public or private \
members of the class. Warie-na, my bad!"
             << endl;
        cout << "Count: " << count << endl;
    }
};

int Employee::count = 1000;
/*
--> Gotta declare outside the class first and then in the class using static keyword.
--> by default it takes zero val
--> It'll be created once and for all and after that will keep getting updated for each new object.

NOTE: And if need arises we can even assign the default val to the static member but not in the class.
It gotta be done here only.

*/

int main()
{
    Employee spidey, harry, mandy;

    spidey.setData();
    spidey.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    mandy.setData();
    mandy.getData();
    Employee::getCount();

    // Employee::getCount();
    // Employee::getCount();
    // Employee::getCount();

    //********************************* Static Member Functions: ***************************************************
    /* We create STATIC MEMBER FUNCTIONS to access all THE STATIC MEMBERS or other STATIC FUNCTIONS.

    ---> An exclusive function for STATIC MEMBERS ONLY.
    ---> A static member function shares the single copy of the member function to any number of the class' objects.
    */
    return 0;
}