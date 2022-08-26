#include <iostream>
#include <string>
using namespace std;

class Waifus_
{
    static int rank;

public:
    string name[100];
    string trait[100];

    void set_her_traits();
    void get_her();
    // void display_them();
};

int Waifus_::rank; // will automatically be taken care of!

void Waifus_::set_her_traits()
{
    rank++;

    cout << "\nEnter the name of Waifu having rank_" << rank << ": " << endl;
    cin >> name[rank];
    
    cout << "Enter " << name[rank] << "'s traits (why do you even like her?!): " << endl;
    cin >> trait[rank];
}

void Waifus_::get_her()
{
    cout << "Your favourite waifu having rank_" << rank << " is: " << name[rank] << endl;
    cout << "You like her because of her " << trait[rank] << endl;
}

// void Waifus_::display_them() // Ain't gonna work!
// {
//     int i = 0;
//     while (i < rank)
//     {
//         cout << name[i] << endl;
//         i++;
//     }
// }

int main()
{
    Waifus_ favgirls[5];

    for (int i = 0; i < 5; i++)
    {
        favgirls[i].set_her_traits();
        favgirls[i].get_her();
    }
    // favgirls[2].display_them();

    // for (int i = 0; i < 5; i++){
    //     cout << favgirls[i] << endl;
    // }
    return 0;
}