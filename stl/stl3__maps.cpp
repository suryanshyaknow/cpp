#include<iostream>
#include<map>
#include<string>
using namespace std;

void displayMap(map <string, int> &m)
{   
    map <string, int> :: iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        /* code */
        cout << (*iter).first << ": " << (*iter).second << endl;
    }
    cout << '\n' << endl;
}

int main()
{   
    // Map is an assosciative array or container
    map<string, int> marks;
    cout << "The size of the marks map as of now is: " << marks.size() << endl;

    marks["Sury"] = 99;
    marks["Yami"] = 98;
    marks["Asta"] = 58;
    marks["Julius"] = 100;
    marks["Mereleona"] = 95;

    // displaying the map
    displayMap(marks);
    
    // inserting a pair
    marks.insert({"Fuego", 85});
    marks.insert({{"Vanessa", 38}, {"Zora", 45}});
    displayMap(marks);

    cout << "The size of the marks map now is: " << marks.size() << endl;

    return 0;
}