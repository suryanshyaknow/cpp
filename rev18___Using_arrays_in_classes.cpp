#include <iostream>
#include <string>
using namespace std;

class Waifus
{
    int rank;

public:
    string name[100];
    string trait[100];

    void init_rank(int ranking);
    void set_her();
    void get_her();
};

void Waifus::init_rank(int ranking)
{
    rank = ranking;
}

void Waifus::set_her()
{
    cout << "\nEnter the name of Waifu having rank_" << rank << ": " << endl;
    cin >> name[rank];

    cout << "Enter her trait (why do you even like her?!): " << endl;
    cin >> trait[rank];

    rank++;
}

void Waifus::get_her()
{
    for (int i = 0; i < rank; i++)
    {
        cout << "Your favourite waifu having rank_" << i << " is: " << name[i] << endl;
        cout << "You like her because of her " << trait[i] << endl;
    }
}

int main()
{
    Waifus favgirl;
    favgirl.init_rank(1);
    for (int i = 0; i < 5; i++)
    {
        favgirl.set_her();
    }
    favgirl.get_her();

    cout << favgirl.name[3] << endl;

    return 0;
}