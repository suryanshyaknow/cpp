#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read();
    bool is_binary();
    void ones_complement();
    void display();
};

void Binary :: read()
{
    cout << "\nEnter a binary number: " << endl;
    cin >> s;
}

bool Binary :: is_binary()
{
    for(int i= 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' || s.at(i) == '1')
        {
            continue;
        }
        else
        {
            cout << "\nThe number ain't binary!" << endl;
            exit(0); 
            
            /* exit(0): 
            We'll just be thrown outta the class execution. Now there's no need to implement 'if and else' to check if the number 
            is binary, simply put this function there(in the first line of the forthcoming methods to be executed). */
        }
    }
    cout << "The number is binary, now fuck off!" << endl;
    return true;
}

void Binary :: ones_complement()
{
    is_binary();

    int i = 0;
    while (i < s.length())
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        i++;
    }
}

void Binary :: display()
{   
   is_binary();
   cout << "\nThe number after the conversion is: " << s << endl;
}


int main(){

    Binary bin;
    bin.read();
    bin.is_binary();
    
    /* After the nesting of the member functions, following two methods will only be executed once the class detetrmines whether the number 
    entered is binary or not. */ 
    bin.ones_complement(); 
    bin.display();

    return 0;
}

/* Nesting of the Member functions: Nothing but a fancy term for using the methods of the class inside the other methods of the same class.
*/