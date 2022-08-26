#include <iostream>
#include <string>
using namespace std;

//************************ Array of Objects using Pointers *********************************
class Name
{
    string first_name, mid_name, last_name;

public:
    void setName(string, string, string);
    void getName();
};

void Name::setName(string fname, string lname, string mname = "")
{
    first_name = fname;
    last_name = lname;
    if (mname == ".")
    {
        mid_name = "";
    }
    else
    {
    mid_name = mname;
    }
}

void Name::getName()
{
    cout << "\n"+ last_name + " " + mid_name + "" + first_name << endl;
}

int main()
{
    Name luffy;
    luffy.setName("Luffy", "Monkey", "D.");
    luffy.getName();

    // Creating an array of names of class Name
    int size = 2;
    Name *arr = new Name[size]; // using pointer
    string f, l, m;
    Name *arrtemp = arr;

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the first name: ";
        cin >> f;

        cout << "middle name: ";
        cin >> m;

        cout << "last name: ";
        cin >> l;

        // (arr + i)->setName(f, l, m);
        (arrtemp)->setName(f, l, m);
        arrtemp++;
    }

    // Now, before we gotta reset the pointer arr to index 0 somehow
    // or the following loop won't work..
    // or we could just simply use a arrtemp

    for (int i = 0; i < size; i++)
    {
        (arr + i)->getName();
    }

    return 0;
}